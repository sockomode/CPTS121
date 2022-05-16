#include "Header.h"

int main(void)
{

	int random = rand() % 100;
	srand((unsigned int)time(NULL));

	int arr[20] = { 0 };

	for (int i = 1; i <= 20; i++)
	{
		int arr[i] = rand() % 100;

	}

	return 0;
}