#include "equations.h"

int sum(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return (num % 10) + sum((num / 10));
	}

}

void reverse_string(char str[], int size)
{
	int index = 0;
	if (size > 1)
	{
		int temp = str[index];
		str[index] = str[size - index - 1];
		str[size - index - 1] = temp;
		reverse_string(str + 1, size - 2);
	}

}

void print_maze(char array[8][8])
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) 
		{
			printf("%c ", array[i][j]);
		}
		printf("\n");
	}
}

void verify_maze(char array[8][8])
{
	if (array[0][0] == 'x' || array[7][7] == 'x')
	{
		printf("Impossible maze. \n");
	}
	else
	{
		printf("This maze could be solveable. \n");
	}
}

int traverse_maze(char array[8][8], int cur_row, int cur_col)
{


}