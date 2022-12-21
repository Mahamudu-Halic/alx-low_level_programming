#include "main.h"
/**
 *string_toupper - changes lowercase to uppercase
 *@a: string
 *Return: uppercased string
 */
char *string_toupper(char *a)
{
	int i;
	for (i = 0; i < strlen(a); i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
