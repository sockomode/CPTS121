/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: Lab4                                                            *
* Date: September 24, 2021                                                                *
* Description: This program calculates the amount of calories                             *
*******************************************************************************************/

#include "equations.h"

int main(void)
{
	FILE* infile = fopen("input.dat", "r");
	char gender = get_gender(infile);
	double height = get_height(infile);
	int age = get_age(infile);
	double weight = get_weight(infile);
	int activity_level = get_activity_level(infile);
	double bmr_score = calculate_bmr(weight, height, age, gender);
	printf("Your BMR score is %.2lf\n", bmr_score);
	double calorie_needs = calculate_calorie_needs(bmr_score, activity_level);
	printf("Your reccommended daily calorie needs is %.2lf\n", calorie_needs);

	return 0;
}