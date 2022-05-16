/*******************************************************************************************
* Programmer: Elijah Lin                                                                   *
* Class: CptS 121, Fall 2021; Lab Section 13                                               *
* Programming Assignment: LAB6                                                             *
* Date: October 8, 2021                                                                    *
* Description: This program does a lot of random things                                    *
*******************************************************************************************/

#include "equations.h"

int main(void)
{

	FILE* infile = fopen("test.txt", "r");
	int testcase = calculate_sum(infile);
	int prime = check_Prime(testcase);
	if (prime == 1)
	{
		printf("The sum is prime.\n");
	}
	else
	{
		printf("The sum is not prime.\n");
	}
	int individual_sum = calculate_individual_sum(testcase);
	int sum_prime = check_Prime(individual_sum);
	if (sum_prime == 1)
	{
		printf("The sum of the individual digits is prime.");
	}
	else
	{
		printf("The sum of the individual digits is not prime.");
	}

	return 0;
}

