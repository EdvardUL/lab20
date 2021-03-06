#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int record_struct_bin()
{
	motorcycle Harley;
	std::cout << "enter quality of cylinder: ";
	std::cin >> Harley.cylinder;
	std::cout << "enter capacity of tank: ";
	std::cin >> Harley.tank_capacity;
	std::cout << "enter quality of gearbox: ";
	std::cin >> Harley.gearbox;
	std::cout << "enter condition of generator 1 - on, 0 - off : ";
	std::cin >> Harley.generator;
	std::cout << "enter model of motorcycle: ";
	std::cin >> Harley.model;
	std::cin.ignore();
	std::ofstream wb("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.bin", std::ios::out | std::ios::app | std::ios::binary);//app- дозапись в конец файла
	if (!wb)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.bin open.\n";
		system("pause");
		return 0;
	}
	wb.write((char*)&Harley, sizeof(Harley));
	wb.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.bin recorded and closed" << std::endl;
	system("pause");
	return 0;
}