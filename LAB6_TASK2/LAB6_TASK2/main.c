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
	int n = 0;

	printf("Please enter a positive integer value.");
	scanf("%d", &n);
	while (n < 0)
	{
		printf("Please enter a positive integer value.");
		scanf("%d", &n);
	}
	
	int factorial = calculate_factiorial(n);
	printf("%d", factorial);

	return 0;
}