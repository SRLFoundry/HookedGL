#pragma once

#include <string>
#include "Communication.h"
#include "command.h"
#include <assert.h>
#include <iostream>
#include <list>

//socket includes
#undef UNICODE

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>

#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_PORT "3333"
//socket end

Communication::Communication()
{
}

int Communication::connect(unsigned char buffer[4113], std::list<Command> &cmdList) {
	WSADATA wsaData;
	int errorCode;

	SOCKET ListenSocket = INVALID_SOCKET;
	SOCKET ClientSocket = INVALID_SOCKET;

	struct addrinfo *result = NULL;
	struct addrinfo hints;

	int iSendResult;
	int bufferlen = 4113;

	// Initialize Winsock
	errorCode = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (errorCode != 0) {
		printf("WSAStartup failed with error: %d\n", errorCode);
		return 1;
	}
	printf("WSAStartup init success\n");
	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	// Resolve the server address and port
	errorCode = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result);
	if (errorCode != 0) {
		printf("getaddrinfo failed with error: %d\n", errorCode);
		WSACleanup();
		return 1;
	}
	printf("getaddrinfo success\n");
	// Create a SOCKET for connecting to server
	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == INVALID_SOCKET) {
		printf("socket failed with error: %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		return 1;
	}
	printf("listen socket success\n");

	// Setup the TCP listening socket
	errorCode = bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (errorCode == SOCKET_ERROR) {
		printf("bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(result);
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}
	printf("listen socket bind success\n");
	freeaddrinfo(result);

	errorCode = listen(ListenSocket, SOMAXCONN);
	if (errorCode == SOCKET_ERROR) {
		printf("listen failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}
	printf("listen success\n");
	// Accept a client socket
	ClientSocket = accept(ListenSocket, NULL, NULL);
	if (ClientSocket == INVALID_SOCKET) {
		printf("accept failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}
	printf("client socket success\n");

	// No longer need server socket
	closesocket(ListenSocket);

	bool firstRecive = true;
	Command *cmdPointer;
	// Receive until the peer shuts down the connection
	do {
		errorCode = recv(ClientSocket, (char*)buffer, bufferlen, 0);
		if (errorCode > 0) {
			printf("Bytes received: %d\n", errorCode);

			if ((int)buffer[0] != 5 && firstRecive) {
				printf("client refused closing connection; no hand-shake\n");
				errorCode = 0;
				break;
			}
			if (firstRecive) {
				buffer[0] = 6;
				iSendResult = send(ClientSocket, (char*)buffer, errorCode, 0);
				if (iSendResult == SOCKET_ERROR) {
					printf("send failed with error: %d\n", WSAGetLastError());
					closesocket(ClientSocket);
					WSACleanup();
					return 1;
				}
				printf("Bytes sent: %d\n", iSendResult);
				firstRecive = false;
			}
			else {
				try {
					cmdPointer = &unPack(buffer);
				}
				catch (int e) {
					//Send a negitive acknoledge (NAK) and the error code back to the client to tell them the commmand failed.
					std::cerr << "Could not unpack data: " << e - 100 << std::endl;
					buffer[0] = 21; //NAK
					buffer[1] = e - 100;
					iSendResult = send(ClientSocket, (char*)buffer, 2, 0);
					if (iSendResult == SOCKET_ERROR) {
						printf("send failed with error: %d\n", WSAGetLastError());
						closesocket(ClientSocket);
						WSACleanup();
						return 1;
					}
					continue;
				}
				cmdList.push_back(*cmdPointer);
				//send an acknoledge (ACK) to the client along with the command Object Index
				buffer[0] = 6;
				buffer[1] = cmdList.size();
				iSendResult = send(ClientSocket, (char*)buffer, 2, 0);
				if (iSendResult == SOCKET_ERROR) {
					printf("send failed with error: %d\n", WSAGetLastError());
					closesocket(ClientSocket);
					WSACleanup();
					return 1;
				}
			}

		}
		else if (errorCode == 0)
			printf("Connection closing...\n");
		else  {
			printf("recv failed with error: %d\n", WSAGetLastError());
			closesocket(ClientSocket);
			WSACleanup();
			return 1;
		}

	} while (errorCode > 0);

	// shutdown the connection since we're done
	errorCode = shutdown(ClientSocket, SD_SEND);
	if (errorCode == SOCKET_ERROR) {
		printf("shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(ClientSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(ClientSocket);
	WSACleanup();

	return 0;
}

Command Communication::unPack(unsigned char buffer[4113]) {
	unsigned char header = buffer[0];
	//1st 4 bits is the command Id (cmdId)
	unsigned char cmdId = header >> 4;
	//next 4 bits is the argument length starting at 1
	unsigned char argLength = ((header << 4) & 0xff) >> 4;
	unsigned char *argSize;
	//check the number of arguments vs the expected number of arguments.
	switch (cmdId) {
		case 0: if (!(argLength == 0)) {
				throw 100 + cmdId;
			}
			break;
		case 1: if (!(argLength == 0)) {
			throw 100 + cmdId;
			}
			break;
		case 2:throw 100 + cmdId;
			break;
		case 3:throw 100 + cmdId;
			break;
		case 4:throw 100 + cmdId;
			break;
		case 5:throw 100 + cmdId;
			break;
		case 6:throw 100 + cmdId;
			break;
		case 7:throw 100 + cmdId;
			break;
		case 8:throw 100 + cmdId;
			break;
		case 9:throw 100 + cmdId;
			break;
		case 10:throw 100 + cmdId;
			break;
		case 11:throw 100 + cmdId;
			break;
		case 12:throw 100 + cmdId;
			break;
		case 13:throw 100 + cmdId;
			break;
		case 14:throw 100 + cmdId;
			break;
		case 15:throw 100 + cmdId;
			break;
		default:throw -1;
			break;
	}
	//create array for the argument size (in bytes)
	argSize = new unsigned char[argLength + 1];
	//fill it with values from the buffer
	for (int i = 0; i <= argLength; i++) {
		argSize[i] = buffer[i+1];
	}
	//keep track of the current position in the buffer
	int offset = 1 + argLength + 1;
	//array of void pointers
	void **args;
	args = new void*[argLength + 1];
	//fill array based on which command it is
	switch (cmdId) {
		//draw line: argument 0: array of integers; grouped in fours
		//argument 1: array length (used internally)
		case 0:	if (!((argSize[0] + 1) % 4 == 0)) {
			throw 100 + 16 + cmdId;
			}
			args[0] = new int[(argSize[0] + 1)/4];
			memcpy(args[0], &buffer[offset], argSize[0] + 1);
			args[1] = new int((argSize[0] + 1) / 4);
			break;
		//set color: argument 0: an integer that holds the red, green, blue, and alpha values
		case 1: if(!((argSize[0] + 1) <= 4)) {
			throw 100 + 16 + cmdId;
			}
			args[0] = new int(0);
			memcpy(args[0], &buffer[offset], argSize[0] + 1);
			break;
		case 2:throw 100 + 16 + cmdId;
			break;
		case 3:throw 100 + 16 + cmdId;
			break;
		case 4:throw 100 + 16 + cmdId;
			break;
		case 5:throw 100 + 16 + cmdId;
			break;
		case 6:throw 100 + 16 + cmdId;
			break;
		case 7:throw 100 + 16 + cmdId;
			break;
		case 8:throw 100 + 16 + cmdId;
			break;
		case 9:throw 100 + 16 + cmdId;
			break;
		case 10:throw 100 + 16 + cmdId;
			break;
		case 11:throw 100 + 16 + cmdId;
			break;
		case 12:throw 100 + 16 + cmdId;
			break;
		case 13:throw 100 + 16 + cmdId;
			break;
		case 14:throw 100 + 16 + cmdId;
			break;
		case 15:throw 100 + 16 + cmdId;
			break;
		default:throw -2;
			break;
	}
	//create the Command object and return it
	Command *answer = new Command(cmdId,argLength,args);
	return *answer;
}

Communication::~Communication()
{
}