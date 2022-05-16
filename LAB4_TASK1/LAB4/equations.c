/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: Lab4                                                            *
* Date: September 24, 2021                                                                *
* Description: This program calculates the amount of calories                             *
*******************************************************************************************/

#include "equations.h"

double get_weight(FILE* infile)
{
	double weight = 0;
	fscanf(infile, "%lf", &weight);
	return weight; 
}

int get_activity_level(FILE* infile)
{
	int activity_level = 0;
	fscanf(infile, "%d", &activity_level);
	return activity_level;
}

double get_height(FILE* infile)
{
	double height = 0;
	fscanf(infile, "%lf", &height);
	return height; 
}

int get_age(FILE* infile)
{
	int age = 0;
	fscanf(infile, "%d", &age);
	return age;
}

char get_gender(FILE* infile)
{
	char gender = '\0';
	fscanf(infile, " %c", &gender);
	return gender;
}

double calculate_bmr(double weight, double height, int age, char gender)
{
	double bmr = 0;
	if (gender == 'f')
	{
		bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
		return bmr;
	}
	else
	{
		bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
		return bmr;
	}
}

double calculate_calorie_needs(double bmr, double activity_level)
{
	double calorie_needs = 0;
	if (activity_level == 1)
	{
		return calorie_needs = bmr * 1.2;
	}
	else if (activity_level == 2)
	{
		return calorie_needs = bmr * 1.375;
	}
	else if (activity_level == 3)
	{
		return calorie_needs = bmr * 1.55;
	}
	else if (activity_level == 4)
	{
		return calorie_needs = bmr * 1.725;
	}
	else
	{
		return calorie_needs = bmr * 1.9;
	}
	}


