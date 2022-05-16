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
	FILE* infile = fopen("salaries.txt", "r");
	double salary_total = read_file(infile);
	char tax_bracket = calculate_tax_bracket(salary_total);
	printf("%c", tax_bracket);
}