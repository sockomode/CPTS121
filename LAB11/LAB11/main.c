#include "equations.h"

int main(void)
{
	FILE* infile = fopen("payroll.txt", "r");
	FILE* outfile = fopen("paid.txt", "w");
	Employee payroll[200] = { {"", '\0', 0.0, 0.0, 0.0} };

	int records = 0;
	double total = 0;
	double average = 0;
	double max = 0;
	double min = 0;

	records = read_records(payroll, infile);
	process_records(payroll, records, &total, &average, &max, &min);

	print_records(outfile, total, average, max, min);

	fclose(outfile);
	fclose(infile);

	return 0;
}