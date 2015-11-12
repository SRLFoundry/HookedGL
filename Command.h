#pragma once

class Command
{
public:
	Command(unsigned char cmd, unsigned char l, void **arg);
	Command();
	void draw();
	void printArgs();
	~Command();

private:
	unsigned char cmdId, length;
	void **args;
};
