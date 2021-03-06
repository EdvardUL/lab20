#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"
#include "task9.h"
#include "task10.h"
int main()
{
	unsigned int task;
	bool repeat;
	do
	{
		std::cout << "choose number of task (1-10): ";
		std::cin >> task;
		switch (task)
		{
		case 1:
		{
			record_text_txt();
			break;
		}
		case 2:
		{	
			read_text_txt();
			break;
		}
		case 3:
		{
			record_array_txt();
			break;
		}
		case 4:
		{
			read_array_txt();
			break;
		}
		case 5:
		{
			record_struct_txt();
			break;
		}
		case 6:
		{
			read_struct_txt();
			break;
		}
		case 7:
		{
			record_struct_bin();
			break;
		}
		case 8:
		{
			read_struct_bin();
			break;
		}
		case 9:
		{
			record_strings_txt();
			break;
		}
		case 10:
		{
			read_strings_txt();
			break;
		}
		default:
		{
			std::cout << "error enter\n";
		}
		}
		std::cout << "return too choose task?(0 - no,1 - yes) ";
		std::cin >> repeat;
	} while (repeat == true);
	return 0;
}