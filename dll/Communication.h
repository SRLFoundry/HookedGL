#pragma once
#include "Command.h"
#include <string>
#include <list>

class Communication
{
public:
	Communication();
	//Constructor
	int connect(unsigned char buffer[4113], std::list<Command> &cmdList, int &ids);
	//create a listening socket and await connection
	//when connected to, listen to the clients socket for data
	//end the connection when the client disconnects
	static Command unPack(unsigned char buffer[4113], int id);
	//Process raw byte array from sockets and return a command object
	~Communication();

private:
	std::string host;
	//sockets host
	std::string port;
	//sockets port
};