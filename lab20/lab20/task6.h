#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int read_struct_txt()
{
	std::ifstream rf("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.txt", std::ios::in);
	if (!rf)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.txt open.\n";
		system("pause");
		return 0;
	}
	motorcycle Harley_1;
	rf >> Harley_1.cylinder >> Harley_1.tank_capacity >> Harley_1.gearbox >> Harley_1.generator >> Harley_1.model;
	while (!rf.eof())
	{
		std::cout << Harley_1.cylinder << " | " << Harley_1.tank_capacity << " | " << Harley_1.gearbox << " | " << Harley_1.generator << " | " << Harley_1.model << std::endl;
		rf >> Harley_1.cylinder >> Harley_1.tank_capacity >> Harley_1.gearbox >> Harley_1.generator >> Harley_1.model;
	}
	rf.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.txt readed and closed" << std::endl;
	system("pause");
	return 0;
}