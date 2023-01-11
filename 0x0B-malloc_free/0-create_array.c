#include "main.h"
/**
 *create_array - creates an array
 *@size: size of array
 *@c: string
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(arr) * size);
	if (arr == NULL)
		return (NULL);
	while (i <= size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
