#include "equations.h"

char *string_reverse(char str[])
{
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	
	int j = count - 1;
	int i = 0;
	char temp = '\0';
	while (i < j)
	{

		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		
		i++;
		j--;

	}

	return str;
}

char* str_reverse(char* str)
{
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	int j = count - 1;
	int i = 0;
	char temp = '\0';
	while (i < j)
	{

		temp = *(str+i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
		
		i++;
		j--;

	}
	return str;
}

char* my_strcpy(char* destination, const char* source)
{
	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	return destination;
}

char* my_strcat(char* destination, const char* source)
{
	int count = 0;
	int source_count = 0;
	while (*destination != '\0')
	{
		count++;
	}
	while (*source != '\0')
	{
		source_count++;
	}
	
	int total_count = count + source_count;
	for (count = 0; source[count] != '\0'; j++) {
		destination[source_count] = source[j];
	}

}

int my_strcmp(const char* s1, const char* s2)
{

}

int my_strlen(const char* s)
{
	int count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return count;
}

