#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatinates src to the end of destination
 * @dest: destination string
 * @src: source string which would be at the end of destination
 *
 * Return: pointer to char that can be freed with "free"
*/
char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;
	char *result, *c;

	len_dest = _strlen(dest);
	len_src = _strlen(src);

	result = malloc(sizeof(char) * (len_dest + len_src + 1));

	if (!result)
		exit(1);

	c = result;

	while (*dest)
	{
		*c = *dest;
		c++;
		dest++;
	}

	while (*src)
	{
		*c = *src;
		c++;
		src++;
	}

	*c = '\0';

	return (result);
}
