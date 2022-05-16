#ifndef EQUATIONS_H
#define EQUATIONS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>


int sum(int num);
void reverse_string(char str[], int size);
void print_maze(char array[8][8]);
int traverse_maze(char array[8][8], int cur_row, int cur_col);
void verify_maze(char array[8][8]);

typedef enum direction
{
	UP, RIGHT, DOWN, LEFT

} Direction;

#endif // !EQUATIONS_H
