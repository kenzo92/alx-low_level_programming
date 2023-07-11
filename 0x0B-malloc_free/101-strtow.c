#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **words_array;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	words_array = malloc((words + 1) * sizeof(char *));
	if (words_array == NULL)
		return (NULL);
	j = 0;
	for (i = 0; str[i] != '\0' && j < words; ++i)
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;
			while (str[k] != ' ' && str[k] != '\0')
			{
				len++;
				k++;
			}
			words_array[j] = malloc((len + 1) * sizeof(char));
			if (words_array[j] == NULL)
			{
				for (i = 0; i < j; ++i)
					free(words_array[i]);
				free(words_array);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words_array[j][k] = str[i + k];
			words_array[j][len] = '\0';
			j++;
			i += len;
		}
	}
	words_array[j] = NULL;
	return (words_array);
}
