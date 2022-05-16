#include "equations.h"

int main(void)
{
	char test[5] = "test";
	char empty[20] = "";
	string_reverse(test);
	puts(test);
	str_reverse(test);
	puts(test);

	my_strcpy(empty, test);
	puts(empty);

	int count = my_strlen(test);
	printf("%d", count);


	return 0;
}