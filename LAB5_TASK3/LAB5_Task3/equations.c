/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA5                                                             *
* Date: October 1, 2021                                                                *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

int greatest_common_divisor(int integer1, int integer2)
{
	int remainder = 0;

	while (integer1 % integer2 != 0)
	{
		remainder = abs(integer1) % abs(integer2);
		integer1 = integer2;
		integer2 = remainder;

	}
	return remainder;
}