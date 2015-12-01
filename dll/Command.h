#pragma once

class Command
{
public:
	Command(unsigned char cmd, unsigned char l, void **arg, int id);
	Command();
	void draw();
	void printArgs() const;
	int getId();
	~Command();

private:
	unsigned char cmdId, length;
	int id;
	void **args;
};