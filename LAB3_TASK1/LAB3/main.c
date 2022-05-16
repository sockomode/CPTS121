/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: Lab3Task1                                                       *
* Date: September 17, 2021                                                                *
* Description: This program calculates a person's BMI score.                              *
*******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings

#include <stdio.h> // necessary to use printf () and scanf ()
#include <math.h>

double get_weight();
double get_height();
double calculate_bmi(double weight_in_pounds, double height_in_feet);
double convert_feet_to_inches(double height_in_feet);
double calculate_bmi(double weight_in_pounds, double height_in_feet);
void display_bmi(double bmi); 

int main(void) // the starting point for all C programs
{
	double weight = get_weight();
	double height = get_height();
	double height_in_inches = convert_feet_to_inches(height);
	double bmi_score = calculate_bmi(weight, height);
	display_bmi(bmi_score);
	printf("Your height in feet %0.1lf\n", height);
	printf("Your height in inches is %lf\n", height_in_inches);

	return 0;
}

double get_weight(void)
{
	double weight = 0;
	printf("Please enter a weight value.\n");
	scanf("%lf", &weight);
	return weight;
}

double get_height(void)
{
	double height = 0;
	printf("Please enter a height value. \n");
	scanf("%lf", &height);
	return height;
}

double convert_feet_to_inches(double height_in_feet)
{
	double height_in_inches = 12 * height_in_feet;
	return height_in_inches;
}

double calculate_bmi(double weight_in_pounds, double height_in_feet)
{
	double updatedheight = convert_feet_to_inches(height_in_feet);
	double bmi = ((weight_in_pounds / ((updatedheight) * (updatedheight))) * 703);
	return bmi;

}

void display_bmi(double bmi)
{
	printf("Your BMI score is %lf\n", bmi);
	
}