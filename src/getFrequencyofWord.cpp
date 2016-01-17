/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int stringLen(char * str)
{
	int i = 0;
	while (str && *str++)
		i++;
	return i;
}

int count_word_in_str_way_1(char *str, char *word)
{
	if (!str || !word)
		return NULL;
	int count = 0, count1 = 0, i, j;
	int len1 = stringLen(str);
	int len2 = stringLen(word);
	for (i = 0; i <= len1 - len2; i++)
	{
		int k = i;
		j = 0;
		while (str[k] && word[j] && str[k++] == word[j++])
		{
			count1++;
		}
		if (count1 == len2)
		{
			count1 = 0;
			count++;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

