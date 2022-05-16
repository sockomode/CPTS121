#ifndef EQUATIONS_H
#define EQUATIONS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

typedef struct employee
{
    char name[100];      // employee's name - last, first
    char title;          // title 'B' or 'M'
    double hours_worked; // total number of hours worked
    double payrate;      // pay rate per hour
    double payment;      // total payment for the pay period – you will compute!

} Employee;

int read_records(Employee payroll[], FILE* infile);
void process_records(Employee payroll[], int records, double* total_ptr, double* avg_ptr, double* max_ptr, double* min_ptr);
void print_records(FILE* outfile, double total, double avg, double max, double min);


#endif // !EQUATIONS_H
