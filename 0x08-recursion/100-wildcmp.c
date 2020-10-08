#include "holberton.h"
#include <stdio.h>
/**
int test(char *s, char *s2, int i, int y)
{
		if (s2[y] == '\0')
				return (1);
		if (s[i] == s2[y+1] && s2[y] == '*')
				return (test(s, s2, i+1, y+1));
		if (s[i] == s2[y])
				return (test(s, s2, i + 1, y + 1));
		if (s2[y] == '*' && s[i] != s2[y])
				return (test(s, s2, i + 1, y));
		return (0);

}
*/
int wildcmp(char *s1, char *s2)
{
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		if (*s2 == '*')
		{
				if (*(s2 + 1) == '*')
						return (wildcmp(s1 + 1, s2 + 1));
				else
						return (wildcmp(s1 + 1, s2));
		}
		return (0);
}
