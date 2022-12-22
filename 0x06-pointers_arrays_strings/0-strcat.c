#include "main.h"
/**
 * _strcat - it will  concatenates two strings.
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dese[i] = src[j];
		i++;
		j++;
	}
	deset[1] = '\0';
	return (dest);
}
