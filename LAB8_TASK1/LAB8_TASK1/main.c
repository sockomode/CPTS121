/*********************l**********************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: LAB8                                                            *
* Date: October 22, 2021                                                                  *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "Header.h"

int main(void)
{
	FILE* infile = fopen("data.txt", "r");

	int arr[100] = {0};
	int len = 0;
	int read_int = 0;
	int output = 0;

	srand((unsigned int)time(NULL));

	while (output != EOF)
	{
		output = fscanf(infile, "%d", &read_int);
		if (output != EOF)
		{
			arr[len] = read_int;
			len++;
		}
	}
	
	reverse_array(arr, 0, 5);

	int random = rand() % 100;

	printf("%d", arr[1]);

	return 0;
}