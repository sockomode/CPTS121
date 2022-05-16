#include "equations.h"

int main(void)
{/*
	int test = sum(598);
	printf("%d", test);

	char str1[] = "TEST";
	int size = 4;
	reverse_string(str1, 4);
	printf("%s", str1);*/

	char possible_maze[8][8] = { {' ', 'x', ' ', ' ', ' ', ' ', 'x', ' '},
								 {' ', 'x', ' ', ' ', 'x', ' ', 'x', ' '},
								 {' ', ' ', ' ', ' ', 'x', ' ', 'x', 'x'},
								 {' ', ' ', 'x', ' ', 'x', ' ', ' ', ' '},
								 {' ', ' ', 'x', ' ', 'x', 'x', 'x', 'x'},
								 {' ', ' ', 'x', ' ', ' ', ' ', ' ', ' '},
								 {'x', ' ', 'x', 'x', 'x', ' ', ' ', ' '},
								 {'x', ' ', ' ', ' ', ' ', ' ', ' ', ' '} };

	char impossible_maze[8][8] = { {' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								   {'x', ' ', ' ', ' ', ' ', ' ', ' ', ' '} };


	print_maze(possible_maze);
	print_maze(impossible_maze);

	verify_maze(possible_maze);
	verify_maze(impossible_maze);


	return 0;
}