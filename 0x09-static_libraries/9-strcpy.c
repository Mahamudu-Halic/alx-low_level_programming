#include "main.h"
#include <string.h>
/**
 *_strcpy - copies string
 *@dest: where to copy string to
 *@src: what to be copied
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i]; i++)
		;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
