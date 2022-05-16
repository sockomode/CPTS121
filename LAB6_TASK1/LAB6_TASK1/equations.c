/*******************************************************************************************
* Programmer: Elijah Lin                                                                   *
* Class: CptS 121, Fall 2021; Lab Section 13                                               *
* Programming Assignment: LAB6                                                             *
* Date: October 8, 2021                                                                    *
* Description: This program does a lot of random things                                    *
*******************************************************************************************/

#include "equations.h"

double get_integer(FILE* infile)
{
	int integer = 0;
	fscanf(infile, "%d", &integer);
	return integer;
}

int calculate_sum(FILE* infile)
{
	int var, sum = 0;
	while (!feof(infile))
	{
		fscanf(infile, "%d", &var);
		sum = var + sum;
	}
	return sum;
}

int check_Prime(int sum)
{
	for(int i = 2; i < sum/2; i++)
	{
		if (sum % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int calculate_individual_sum(int num)
{
	int sum = 0;
	int var = 0;
	while (num > 0)
	{
		var = num % 10;
		sum += var;
		num = num / 10;
	}
	return sum;
}