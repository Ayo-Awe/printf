#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * handle_specifier - handles format specifiers
 * @specifier: char representing a format specifier
 * @va: va_list of the arguments
 *
 * Return: char pointer or NULL if no matching specifier
*/
char *handle_specifier(char specifier, va_list va)
{
	int a;
	char *p, *tmp;

	switch (specifier)
	{
	case 'c':
		a = (va_arg(va, int));
		p = malloc(sizeof(char) * 2);
		p[0] = a;
		p[1] = '\0';
		return (p);
	case 's':
		tmp = va_arg(va, char *);
		p = malloc((sizeof(char) * _strlen(tmp)));
		*p = '\0';
		return (_strcat(p, tmp));

	case 'd':
	case 'i':
		a =  va_arg(va, int);
		p = _itoa(a);
		return (p);

	default:
		return (NULL);
	}
}
