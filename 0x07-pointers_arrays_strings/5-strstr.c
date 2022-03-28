#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the string to be searched for
 *
 * Description: a function that locates a substring.
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, m = 0, n;
	char *p = NULL;

	for (i = 0; needle[i]; i++)
		m++;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (n = 1; n < m && haystack[i + n] && needle[n]; n++)
			{
				if (haystack[i + n] != needle[n])
					break;
				else if ((haystack[i + n] == needle[n]) && (n == m - 1))
					return (&needle[0]);
			}
		}
	}
	return (p);
}
