#include "Header.h"

int main(void)
{

    FILE* infile = fopen("data.txt", "r");
    FILE* outfile = fopen("output.txt", "w");
    int customer_number = 0;
    int year, month = 0;
    double hours, total_amount, total_charge, avg_cost, num, total_num = 0;

    month = read_int(infile);
    year = read_int(infile);
    customer_number = read_int(infile);
    hours = read_double(infile);

    charges(hours, &total_charge, &avg_cost);

    fprintf(outfile, "Date: %d / %d\n", month, year);
    fprintf(outfile, "Customer Number: %d\n", customer_number);
    fprintf(outfile, "Number of hours: %lf\n", hours);
    fprintf(outfile, "Total Charge: %0.2lf\n", total_charge);
    fprintf(outfile, "Average Charge Per Hour: %0.2lf\n", avg_cost);

    fclose(infile);
    fclose(outfile);





    return 0;

}