/*******************************************************************************************
* Programmer: Elijah Lin                                                                   *
* Class: CptS 121, Fall 2021; Lab Section 13                                               *
* Programming Assignment: LAB6                                                             *
* Date: October 8, 2021                                                                    *
* Description: This program does a lot of random things                                    *
*******************************************************************************************/

#ifndef EQUATIONS_H
#define EQUATIONS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <float.h>

double get_integer(FILE* infile);
int calculate_sum(FILE* infile);
int calculate_individual_sum(int num);
int check_Prime(int sum);


#endif // !1