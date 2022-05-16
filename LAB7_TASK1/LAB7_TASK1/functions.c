#include "Header.h"

int read_int(FILE* infile)
{
    int res = 0;
    fscanf(infile, "%d", &res);
    return res;
}

double read_double(FILE* infile)
{
    double res = 0;
    fscanf(infile, "%lf", &res);
    return res;
}

double charges(double hours, double* total_charge, double* avg_cost)
{
    double additional_hours, additional_charge = 0;
    double charge, temp = 0;
    additional_hours = hours - 10;

    if (hours <= 10 && hours >= 1)
    {
        *total_charge = 7.99;
        *avg_cost = *total_charge / hours;
    }
    else if (hours > 10)
    {
        additional_charge = additional_hours * 1.99;
        *total_charge = 7.99 + additional_charge;
        *avg_cost = *total_charge / hours;
    }
    else if (hours <= 0)
    {
        charge = 0;
        *total_charge = 0.00;
        *avg_cost = 0;
    }

  /*  temp = *total_charge;
    *total_charge = round_money(temp);

    temp = *avg_cost;
    *avg_cost = round_money(temp);*/
}

double round_money(double num)
{
    double new_num;
    new_num = num * 100;
    new_num = round(new_num);
    new_num /= 100;
    return new_num;
}