#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int record_array_txt()
{
	int n, m;
	do
	{
		std::cout << "enter number of rows ";
		std::cin >> m;
	} while (m < 1);
	long int* mas = new long int[m];
	if (mas == NULL)
	{
		std::cout << "error.make array";
		system("pause");
		return 0;
	}
	for (int i = 0; i < m; i++)
	{
		std::cin >> mas[i];
	}
	std::ofstream f("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_0.txt", std::ios::out | std::ios::trunc);
	if (!f)
	{
		std::cout << "File C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_0.txt cant open for reading" << std::endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < m; i++)
	{
		f << mas[i] << '!';
	}
	f.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_0.txt recorded and closed" << std::endl;
	delete[] mas;
	mas = NULL;
}