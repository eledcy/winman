#include <iostream>
#include "../include/winman.h"

int main(int argc, char* argv[])
{
	std::string package;
	bool running = true;

	while (true)
	{

		std::cout << "package > ";
		std::cin >> package;

		if (package == "--help")
		{
			winman::help();
		}

		if (package == "")
		{
			std::cout << "package > ";
		}

		if (package == "--exit")
		{
			running = false;
		}

		if (package == "--run birthdate")
		{
			winman::birthdate();
		}

	}
	
	return 0;
}
