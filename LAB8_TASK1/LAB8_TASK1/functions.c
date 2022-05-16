/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: LAB8                                                            *
* Date: October 22, 2021                                                                  *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "Header.h"

int read_int(FILE* infile)
{
    int res = 0;
    fscanf(infile, "%d", &res);
    return res;
}
//
//double read_double(FILE* infile)
//{
//    double res = 0;
//    fscanf(infile, "%lf", &res);
//    return res;
//}

int populate_array(FILE* infile)
{
    /*for (int i = 0; i < 10000; i++)
    {
        int test[9];
        fscanf(infile, "%d", &test[i]);
        if (test[i] == '\0')
        {
            return test[10];
        }
    }*/
    int test[100];
    for (int i = 0; i < 10000; i++)
    {
        do
        {
        fscanf(infile, "%d", &test[i]);
        
        } while (test[i] != NULL);
    }
    return test;
}

void reverse_array(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}