#pragma once

#include <string>
#include "Communication.h"
#include "command.h"
#include <assert.h>
#include <iostream>

//socket includes
#undef UNICODE

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>

#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 4113
#define DEFAULT_PORT "27015"
//socket end

Communication::Communication()
{
}

int Communication::initSocket() {
	WSADATA wsaData;
	int errorCode;

	SOCKET ListenSocket = INVALID_SOCKET;
	SOCKET ClientSocket = INVALID_SOCKET;

	struct addrinfo *result = NULL;
	struct addrinfo hints;

	int iSendResult;
	char recvbuf[DEFAULT_BUFLEN];
	int recvbuflen = DEFAULT_BUFLEN;

	// Initialize Winsock
	errorCode = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (errorCode != 0) {
		printf("WSAStartup failed with error: %d\n", errorCode);
		return 1;
	}

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

	// Create a SOCKET for connecting to server
	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == INVALID_SOCKET) {
		printf("socket failed with error: %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		return 1;
	}

	// Setup the TCP listening socket
	errorCode = bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (errorCode == SOCKET_ERROR) {
		printf("bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(result);
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	freeaddrinfo(result);

	errorCode = listen(ListenSocket, SOMAXCONN);
	if (errorCode == SOCKET_ERROR) {
		printf("listen failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	// Accept a client socket
	ClientSocket = accept(ListenSocket, NULL, NULL);
	if (ClientSocket == INVALID_SOCKET) {
		printf("accept failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	// No longer need server socket
	closesocket(ListenSocket);

	// Receive until the peer shuts down the connection
	do {

		errorCode = recv(ClientSocket, recvbuf, recvbuflen, 0);
		if (errorCode > 0) {
			printf("Bytes received: %d\n", errorCode);

			// Echo the buffer back to the sender
			iSendResult = send(ClientSocket, recvbuf, errorCode, 0);
			if (iSendResult == SOCKET_ERROR) {
				printf("send failed with error: %d\n", WSAGetLastError());
				closesocket(ClientSocket);
				WSACleanup();
				return 1;
			}
			printf("Bytes sent: %d\n", iSendResult);
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
		case 0: assert(argLength == 0);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		default:
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
		case 0:	assert((argSize[0] + 1) % 4 == 0);
			args[0] = new int[(argSize[0] + 1)/4];
			memcpy(args[0], &buffer[offset], argSize[0] + 1);
			args[1] = new int((argSize[0] + 1) / 4);
			break;
		//set color: argument 0: an integer that holds the red, green, blue, and alpha values
		case 1: assert((argSize[0] + 1) <= 4);
			args[0] = new int(0);
			memcpy(args[0], &buffer[offset], argSize[0] + 1);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		default:
			break;
	}
	//create the Command object and return it
	Command *answer = new Command(cmdId,argLength,args);
	return *answer;
}

Communication::~Communication()
{
}
