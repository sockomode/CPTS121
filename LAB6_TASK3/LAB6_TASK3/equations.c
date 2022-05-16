/*******************************************************************************************
* Programmer: Elijah Lin                                                                   *
* Class: CptS 121, Fall 2021; Lab Section 13                                               *
* Programming Assignment: LAB6                                                             *
* Date: October 8, 2021                                                                    *
* Description: This program does a lot of random things                                    *
*******************************************************************************************/
#include "equations.h"

double calculate_fibonacci(int n)
{
	int previous1 = 1;
	int previous2 = 0;
	int nextnum = 0;

	for (int i = 2; i <= n; i++)
	{
		nextnum = previous1 + previous2;
		previous2 = previous1;
		previous1 = nextnum;
		
		
	}
	return nextnum;
}