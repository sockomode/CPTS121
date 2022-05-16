#include "Header.h"

double predict(double num)
{
	double year = 1984;
	double revenue = 0;
	for (int i = 0; i <= num; i++)
	{
		revenue = pow(1.071,i)*203.625; 
		if (revenue >= num)
		{
			return year;
		}
		else
		{
			year++;
		}
	}
}