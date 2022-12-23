#include "main.h"

/**
 * _strncpy - copy a string
 * @dest - copy to
 * @src - copy from
 * @n: numbers of char to be copiedi
 * Return : dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
