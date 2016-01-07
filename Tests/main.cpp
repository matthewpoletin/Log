#include <iostream>

#include "Log.h"

void Test1()
{
	LOG("tag", "string");
}

int main()
{
	Log::Init("");

	std::cout << "Tests here" << std::endl;

	Test1();

	system("pause");

	return 0;
}