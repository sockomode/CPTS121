/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA5                                                             *
* Date: October 1, 2021                                                                   *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

double find_max(FILE* infile)
{
	double max = DBL_MIN;
	double var = 0;
	while (!feof(infile))
	{
		fscanf(infile, "%lf", &var);
		if (var > max)
		{
			max = var;
		}

	}

	return max;
}

double find_min(FILE* infile)
{
	double min = 9000000;
	double var = 0;
	while (!feof(infile))
	{
		fscanf(infile, "%lf", &var);
		if (var < min)
		{
			min = var;
		}

	}

	return min;
}