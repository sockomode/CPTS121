/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA5                                                             *
* Date: October 1, 2021                                                                *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/
#include "equations.h"

double read_file(FILE* infile)
{
	double var, sum = 0;

	while (!feof(infile))
	{
		fscanf(infile, "%lf", &var);
		sum += var;
	}

	return sum;
}

char calculate_tax_bracket(double var)
{
	if (var < 15000)
	{
		return 'l';
	}
	else if (var < 200000)
	{
		return 'm';
	}
	else
	{
		return 'h';
	}
}