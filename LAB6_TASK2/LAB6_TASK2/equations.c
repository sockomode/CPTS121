/*******************************************************************************************
* Programmer: Elijah Lin                                                                   *
* Class: CptS 121, Fall 2021; Lab Section 13                                               *
* Programming Assignment: LAB6                                                             *
* Date: October 8, 2021                                                                    *
* Description: This program does a lot of random things                                    *
*******************************************************************************************/
#include "equations.h"

int calculate_factiorial(int num)
{
	int factorial = 1;
	for (int i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	return factorial;
}
