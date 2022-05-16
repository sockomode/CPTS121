#include "equations.h"

int read_records(Employee payroll[], FILE* infile)
{
	char a = '\0';
	int i = 0;
	while (!feof(infile))
	{
		
		fgets(payroll[i].name, 100, infile);
		fscanf(infile, " %c", &payroll[i].title);
		fscanf(infile, "%lf", &payroll[i].hours_worked);
		fscanf(infile, "%lf", &payroll[i].payrate);
		fscanf(infile, "%c", &a);
		i++;
	}
	return i; 
}

void process_records(Employee payroll[], int records, double* total_ptr, double* avg_ptr, double* max_ptr, double* min_ptr)
{
	int max = 0;
	int min = 0;

	for (int i = 0; i < records; i++)
	{
		double overtime = 0;
		double hours_worked = 0; 

		if (payroll[i].hours_worked > 80)
		{
			overtime = payroll[i].hours_worked - 80;
			hours_worked = 80;
		}

		if (payroll[i].title == 'B')
		{
			payroll[i].payment = hours_worked * payroll[i].payrate;
			overtime = overtime * 1.5 * payroll[i].payrate;
			payroll[i].payment += overtime;
		}

		if (payroll[i].title == 'M')
		{
			payroll[i].payment = hours_worked * payroll[i].payrate;
			overtime = overtime * 1.8 * payroll[i].payrate;
			payroll[i].payment += overtime;
		}

		*total_ptr = *total_ptr + payroll[i].payment;
	}

	for (int i = 0; i < records; i++)
	{
		int temp = 0;
		int min_temp = 99999;

		if (payroll[i].payment > temp)
		{
			*max_ptr = payroll[i].payment;
		}
		else if(payroll[i].payment < min_temp)
		{
			*min_ptr = payroll[i].payment;
		}
	}

	*avg_ptr = *total_ptr / records;
}

void print_records(FILE* outfile, double total, double avg, double max, double min)
{
	fprintf(outfile, "Total: %lf \n", total);
	fprintf(outfile, "Average: %lf \n", avg);
	fprintf(outfile, "Max: %lf \n", max);
	fprintf(outfile, "Min: %lf \n", min);
}