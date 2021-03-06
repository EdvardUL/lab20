#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int read_text_txt()
{
	char str[100];
	char file[] = "C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20.txt";
	std::ifstream f(file, std::ios::in);
	if (!f)
	{
		std::cout << "File " << file << " cant open for reading" << std::endl;
		system("pause");
		return 0;
	}
	while (!f.eof())//пока не достигли маркера End of Line
	{
		f >> str;
		std::cout << str << ' ';
	}
	f.close();
	std::cout << "\nfile " << file << " readed and closed" << std::endl;;
	return 0;
}