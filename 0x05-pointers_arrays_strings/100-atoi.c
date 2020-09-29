#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copy array to another one with \0
 * @dest: new array
 * @src: original array
 * Return: the new array
 */
int _atoi(char *s)
{
	int i, sign; 
	int tab[100];
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32)
		{	
			i++;
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			sign = s[i];
			i++;	
		}
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			tab[i] = putchar(s[i] + '0');
		}
		else
		{
			return (0);
		}
		tab[15] = sign;		
	
	}
	return (*tab);
	
}
