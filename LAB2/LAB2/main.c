/*******************************************************************************************
* Programmer: Elijah Lin                                                                *
* Class: CptS 121, Fall 2021; Lab Section 13                                                *
* Programming Assignment: Lab2Task1                                                      *
* Date: September 10, 2021                                                                            *
* Description: This program prints out a simple "hello world" message.       *
*******************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings

#include <stdio.h> // necessary to use printf () and scanf ()

int main(void) // the starting point for all C programs
{
	int x1, y1, x2, y2 = 0;
	printf("Please enter four integers. First two will represent the first coordinate. Second two will represent the second one.\n");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	double slope = ((double)y2 - y1) / ((double)x2 - x1);
	printf("The slope of the given coordinates are %lf\n", slope);

	double x_midpoint = ((double)x1 + x2) / 2;
	double y_midpoint = ((double)y1 + y2) / 2;
	printf("The midpoint of the given coordinates are (%lf,%lf)\n", x_midpoint, y_midpoint);

	double perpindic_slope = -1 / slope;
	printf("The slope of the perpindicular bisector is %lf\n", perpindic_slope);

	double y_intercept = y_midpoint - perpindic_slope * x_midpoint;
	printf("The intercept of the perpindicular bisector %lf\n", y_intercept);

	printf("Your two coordinate points are (%d,%d) and (%d,%d)\n", x1, y1, x2, y2);
	printf("The equation of the perpindicular bisector is y = %lfx + %lf\n", perpindic_slope, y_intercept);

	double weight, height = 0;
	printf("Please enter two numbers the first represents weight the second represents height\n");
	scanf("%lf%lf", &weight, &height);
	double bmi = ((weight) / ((height) * (height))) * 703;
	printf("Your BMI is %lf\n", bmi);

	double harris, coaches, computer_ranking = 0;
	printf("Please enter a number from 1 to 2,850\n");
	scanf("%lf", &harris);
	printf("Please enter a number from 1 to 1,475\n");
	scanf("%lf", &coaches);
	printf("Please enter a number from 0 to 1\n");
	scanf("%lf", &computer_ranking);

	double harris_poll = harris / 2850;
	double coaches_poll = coaches / 1475;
	double BCS_score = (harris_poll + coaches_poll + computer_ranking) / 3;

	printf("The BCS score is %lf\n", BCS_score);


	return 0;
}