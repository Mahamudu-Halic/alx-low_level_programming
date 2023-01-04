#include "main.h"
/**
 *print_diagsums - print the sum of two diagonals
 *@a: numbers to be calculated
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
int i, j, int sum = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum += a[i][j];
}
}
_putchar('\n');
}
