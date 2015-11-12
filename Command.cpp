#pragma once
#include <iostream>
#include "Command.h"

Command::Command(unsigned char cmd, unsigned char l, void **arg)
{
	cmdId = cmd;
	length = l;
	args = arg;
}
Command::Command() {

}
void Command::printArgs() {
	switch (cmdId) {
		case 0: {
			int *arrayLength = (int*)args[1];
			int *argArray = (int*)args[0];
			std::cout << "Array length: " << *arrayLength << std::endl;
			for (int i = 0; i < *arrayLength; i++) {
				std::cout << argArray[i] << std::endl;
			}
		}
			break;
		case 1: {
			int *color = (int*)args[0];
			std::cout << "color: " << *color << std::endl
				<< "red: " << (*color & 0x000000ff) << std::endl
				<< "green: " << ((*color & 0x0000ff00) >> 8) << std::endl
				<< "blue: " << ((*color & 0x00ff0000) >> 16) << std::endl
				<< "alpha: " << ((*color & 0xff000000) >> 24) << std::endl;
		}
			break;
	}
}
void Command::draw() {
	std::cout << "not Implemented" << std::endl;
}
Command::~Command()
{

}
