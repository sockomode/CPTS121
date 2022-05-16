/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA5                                                             *
* Date: October 1, 2021                                                                *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

int main(void)

{

    FILE* infile = fopen("data.txt","r");
    FILE* outfile = fopen("output.txt", "w");
    
    double count = 0;
    double var, sum = 0;

    while (!feof(infile))
        {

            fscanf(infile, "%lf", &var);
            sum += var;
            count++;
            
        }

    double average = sum / count;
    printf("%lf", average);

    fprintf(outfile, "%lf", average);
    





    /* Output average to a file named "output.txt". */

    /* Close your files. */



    return 0;

}