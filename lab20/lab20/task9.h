#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int record_strings_txt()
{
	int n;
	do
	{
		std::cout << "Сколько строк (абзацев) текста вы хотите ввести (>0): ";
		std::cin >> n;
	} while (n < 1);
	char text[100];
	std::ofstream f("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_2.txt", std::ios::out | std::ios::app);
	if (!f)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_2.txt open.\n";
		system("pause");
		return 0;
	}
	std::cin.ignore();
	for (int i = 0; i < n; i++)
	{
		std::cout << "enter string number " << i << " with limit 100 symbols\n";
		std::cin.getline(text, 100);
		f << text << std::endl;
	}
	f.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_2.txt recorded and closed" << std::endl;
	system("pause");
	return 0;
}