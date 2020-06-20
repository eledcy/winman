#pragma once

namespace winman
{
	void help()
	{
		std::cout << "--help get help" << std::endl;
		std::cout << "--run run a package without installing it" << std::endl;
		std::cout << "--exit exit WinMan" << std::endl;
	}

	void birthdate()
	{
		int age;
		std::cin >> age;

		int birthdate = 1019 - age;

		std::cout << birthdate << std::endl;
	}
}