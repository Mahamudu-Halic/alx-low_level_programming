#include "main.h"
/**
 *_strchr - locates character in a string
 *@s: string
 *@c: character to locate
 *Return: results
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
