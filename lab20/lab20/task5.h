#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int record_struct_txt()
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
	std::ofstream wf("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.txt", std::ios::out | std::ios::app);//app- дозапись в конец файла
	if (!wf)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.txt open.\n";
		system("pause");
		return 0;
	}
	wf << Harley.cylinder << ' ' << Harley.tank_capacity << ' ' << Harley.gearbox << ' ' << Harley.generator << ' ' << Harley.model << std::endl;
	wf.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.txt recorded and closed" << std::endl;
	system("pause");
	return 0;
}