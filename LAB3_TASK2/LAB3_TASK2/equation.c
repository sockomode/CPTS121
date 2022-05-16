/*******************************************************************************************
* Programmer: Elijah Lin                                                                *
* Class: CptS 121, Fall 2021; Lab Section 13                                                *
* Programming Assignment: Lab3Task2                                                      *
* Date: September 17, 2021                                                                            *
* Description: This program calculaates the duration of a flight      *
*******************************************************************************************/

#include "equation.h"

double get_distance(void)
{
	double distance = 0;
	printf("Please enter a value for the distance. \n");
	scanf("%lf", &distance);
	return distance; 
}

double get_velocity(void)
{
	double velocity = 0;
	printf("Please enter a value for the velocity. \n");
	scanf("%lf", &velocity);
	return velocity;
}

double get_theta(void)
{
	double theta = 0;
	printf("Please enter a value for the theta. \n");
	scanf("%lf", &theta);
	return theta;
}

double calculate_time(double distance, double velocity, double theta)
{
	double time = (distance) / (velocity * cos(theta));
	return time;
}

double calculate_height(double velocity, double theta, double time)
{
	double height = velocity * sin(theta) * time - (((G * time) * (G * time)) / 2);
	return height;
}