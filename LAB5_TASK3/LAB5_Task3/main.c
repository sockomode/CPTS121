/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA5                                                             *
* Date: October 1, 2021                                                                *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

int main(void)
{
	FILE* infile = fopen("data.txt", "r");
	FILE* outfile = fopen("output.txt", "w");

	int var1, var2 = 0;
	
	fscanf(infile, "%d", &var1);
	fscanf(infile, "%d", &var2);

	int testcase = greatest_common_divisor(var1, var2);
	fprintf(outfile, "%d", testcase);
}