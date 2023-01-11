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
int i = 0;

if (size == 0)
return '\0';
arr = malloc(sizeof(arr) * size);
while (i <= size)
{
arr[i] = c;
i++;
}
return arr;
}
