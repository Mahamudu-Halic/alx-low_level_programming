#include "main.h"
/**
 *reverse_array - reverse content of an array
 *@a: an array of integers
 *n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int  i, j = n - 1, num[n];
	for (i = 0; i < n; i++)
	{
		num[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = num[j];
		j--;
	}
}
