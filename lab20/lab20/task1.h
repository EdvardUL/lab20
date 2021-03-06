#pragma once
#include <fstream>
#include <iostream>
struct motorcycle
{
	int cylinder;
	double tank_capacity;
	char gearbox;
	bool generator;
	char model[20];
	int crankshaft[10];
};
int record_text_txt()
{
	char paragraph[100];
	char file[] = "C:\\Users\\User\\source\\repos\\lab20\\GavrilchikLab20.txt";
	std::ofstream f(file, std::ios::out || std::ios::app);
	if (!f)
	{
		std::cout << "File " << file << " cant open for recording" << std::endl;
		system("pause");
		return 0;
	}
	std::cin.ignore();
	std::cout << "enter paragraph: ";
	std::cin.getline(paragraph, 100);
	f << paragraph << std::endl;
	f.close();
	std::cout << "File " << file << " is already closed and recorded"<<std::endl;
	system("pause");
	return 0;
}