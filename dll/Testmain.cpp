#include <iostream>
#include <string>
#include "Command.h"
#include "Communication.h"
#include <list>
#include <thread>

unsigned char /*test[15],*/ buffer[4113];
std::list<Command> cmdList;
bool connectionFinished = false;

void networkWorker() {
	int ids = 0;
	Communication c = Communication();
	c.connect(buffer, cmdList, ids);
	std::cout << "connection Closed" << std::endl;
	connectionFinished = true;
}

int main() {
	int oldLength = 0;
	bool first = true;
	std::thread *t1 = NULL;
	while (true) {
		std::cout << std::endl << "Starting connection..." << std::endl << std::endl;
		cmdList.clear();
		connectionFinished = false;
		oldLength = cmdList.size();
		if (t1)
			delete t1;
		t1 = new std::thread(networkWorker);
		first = true;
		std::list<Command>::const_iterator ci;
		while (!connectionFinished) {
			while (oldLength == cmdList.size() && !connectionFinished);
			if (connectionFinished)
				break;
			oldLength = cmdList.size();
			if (first) {
				ci = cmdList.begin();
				first = false;
			}
			else {
				ci++;
			}
			std::cout << std::endl;
			ci->printArgs();
			std::cout << std::endl;
		}
		t1->join();
	}
	return 0;
}