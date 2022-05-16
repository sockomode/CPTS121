/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA5                                                             *
* Date: October 1, 2021                                                                   *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

int main(void)
{
	FILE* infile = fopen("data.txt", "r");
	FILE* infile1 = fopen("data.txt", "r");
	double max = find_max(infile);
	double min = find_min(infile1);
	printf("%lf\n", max);
	printf("%lf\n", min);
	return 0;
}