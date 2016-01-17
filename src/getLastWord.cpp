/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int stringlen(char * str)
{
	int i = 0;
	while (str && *str++)
		i++;
	return i;
}

char * get_last_word(char * str)
{
	if (!str)
		return NULL;

	char * substr = (char *)malloc(sizeof(char));
	int i, j = 0;
	for (i = stringlen(str) - 1; i >= 0; i--)
	{
		if (str[i] == ' ' || str[i] == 0)
			break;
	}
	i++;
	for (; str[i] != 0; i++)
		substr[j++] = str[i];
	
	substr[j] = 0;
	return substr;
}
