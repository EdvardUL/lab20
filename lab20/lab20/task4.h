#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int read_array_txt()
{
	std::ifstream f("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_0.txt", std::ios::in);
	if (!f)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_0.txt open.\n";
		system("pause");
		return 0;
	}
	long int y;
	char c = '!';//прописываем разделитель
	f >> y >> c;
	while (!f.eof())//пока не достигли маркера End of Line
	{
		std::cout << y << ' ';
		f >> y >> c;
	}
	f.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_0.txt readed and closed" << std::endl;
	system("pause");
	return 0;
}