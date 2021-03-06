#pragma once
#include <fstream>
#include <iostream>
#include"task1.h"
int read_struct_bin()
{
	motorcycle Harley;
	std::ifstream rb("C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.bin", std::ios::in | std::ios::binary);
	if (!rb)
	{
		std::cout << "error C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.bin open.\n";
		system("pause");
		return 0;
	}
	motorcycle Harley_1;
	rb.read((char*)&Harley, sizeof(Harley));
	while (!rb.eof())
	{
		std::cout << Harley_1.cylinder << " | " << Harley_1.tank_capacity << " | " << Harley_1.gearbox << " | " << Harley_1.generator << " | " << Harley_1.model << std::endl;
		rb.read((char*)&Harley, sizeof(Harley));
	}
	rb.close();
	std::cout << "\nfile C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20_1.bin readed and closed" << std::endl;
	system("pause");
	return 0;
}