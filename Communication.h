#pragma once
#include "Command.h"
#include <string>

class Communication
{
public:
	Communication();
	//Constructor
	int initSocket();
	//create a listening socket and await connection
	//when connected to, listen to the clients socket for data
	//end the connection when the client disconnects
	static Command unPack(unsigned char buffer[4113]);
	//Process raw byte array from sockets and return a command object
	~Communication();

private:
	std::string host;
	//sockets host
	std::string port;
	//sockets port
};
