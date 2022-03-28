#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Description: a function that gets the length of a prefix substring
 * Return: This function returns the number of characters in the
 * initial segment of s which consist only of characters  from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0, m = 0;
	unsigned int len = 0;

	for (i = 0; accept[i]; i++)
		n++;
	for (j = 0; s[j]; j++)
		m++;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (accept[i] == s[j])
			{
				len++;
				break;
			}
		}
	}
	return (len);
}
