/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: LAB8                                                            *
* Date: October 22, 2021                                                                  *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

//including libraries
#ifndef HEADER_H
#define HEADER_H


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <ctype.h>


//function declarations
int read_int(FILE* infile);
double read_double(FILE* infile);
int populate_array(FILE* infile);
void reverse_array(int arr[], int start, int end);

#endif // !HEADER_H