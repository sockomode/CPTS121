/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assi;gnment: Lab4                                                            *
* Date: September 24, 2021                                                                *
* Description: This program calculates the amount of calories                             *
*******************************************************************************************/

#ifndef EQUATIONS_H
#define EQUATIONS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_height(FILE* infile);
double get_weight(FILE* infile);
int get_age(FILE* infile);
char get_gender(FILE* infile);
double calculate_bmr(double weight, double height, int age, char gender);
double calculate_calorie_needs(double bmr, double activity_level);
int get_activity_level(FILE* infile);

#endif 