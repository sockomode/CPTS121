//including libraries
#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


//function declarations
int read_int(FILE* infile);
double read_double(FILE* infile);
double charges(double hours, double* total_charge, double* avg_cost);
double round_money(double num);

#endif // !HEADER_H

