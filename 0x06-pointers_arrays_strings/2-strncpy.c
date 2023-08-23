#include "main.h"
/**
*  _strncpy - copy a string
*  @dest: input value
*  @src: input walue
*  @n: input value
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++
	}

	return (dest);
}
