/*******************************************************************************************
* Programmer: Elijah Lin                                                                *
* Class: CptS 121, Fall 2021; Lab Section 13                                                *
* Programming Assignment: Lab3Task2                                                      *
* Date: September 17, 2021                                                                            *
* Description: This program calculaates the duration of a flight      *
*******************************************************************************************/

#ifndef EQUATIONS_H
#define EQUATIONS_H

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings

#define G 32.17


#include <stdio.h> // necessary to use printf () and scanf ()
#include <math.h>

double get_velocity(void);
double get_distance(void);
double get_theta(void);
double calculate_time(double distance, double velocity, double theta);
double calculate_height(double velocity, double theta, double time);


#endif // !EQUATIONS_H