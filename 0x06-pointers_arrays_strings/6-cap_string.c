#include "holberton.h"
/**
 * *cap_string - convert lower to upper, first letter of a word
 * @s: string
 * Return: uppercase word string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '\t' || s[i - 1] == ' ' || s[i - 1] == '\n')
				s[i] = s[i] - 32;
			else if (s[i - 1] == ',')
				s[i] = s[i] - 32;
			else if (s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!')
				s[i] = s[i] - 32;
			else if (s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(')
				s[i] = s[i] - 32;
			else if (s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
