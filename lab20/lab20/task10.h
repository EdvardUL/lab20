#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int read_strings_txt()
{
	char str[100];
	std::ifstream f("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_2.txt", std::ios::in);
	if (!f)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_2.txt open.\n";
		system("pause");
		return 0;
	}
	f.getline(str, 100, '\n');
	while (!f.eof())
	{
		std::cout << str << std::endl;
		f.getline(str, 100, '\n');
	}
	f.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_2.txt recorded and closed" << std::endl;
	system("pause");
	return 0;
}
