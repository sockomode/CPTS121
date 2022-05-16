/*******************************************************************************************
* Programmer: Elijah Lin                                                                *
* Class: CptS 121, Fall 2021; Lab Section 13                                                *
* Programming Assignment: Lab3Task2                                                      *
* Date: September 17, 2021                                                                            *
* Description: This program calculaates the duration of a flight      *
*******************************************************************************************/

#include "equation.h"

int main(void)
{
	double velocity = get_velocity();
	double theta = get_theta();
	double distance = get_distance();

	double time = calculate_time(distance, velocity, theta);
	printf("The total duration of the flight is %lf \n", time);

	double height = calculate_height(velocity, theta, time);
	printf("The height of the plane at %lf is %lf", time, height);

	return 0;
}