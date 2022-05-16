/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA3                                                             *
* Date: September 22, 2021                                                                *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

double calculate_total_bonus(char tf1, char tf2, char tf3, char tf4, char tf5, char tf6, char tf7)
{
	double total = 0;

	if (tf1 = 'y')
	{
		total += 25000;
	}
	if (tf2 == 'y')
	{
		total += 75000;
	}
	if (tf3 == 'y')
	{
		total += 100000;
	}
	if (tf4 == 'y')
	{
		total += 50000;
	}
	if (tf5 == 'y')
	{
		total += 35000;
	}
	if (tf6 == 'y')
	{
		total += 25000;
	}
	if (tf7 == 'y')
	{
		total += 25000;
	}
	return total;
}