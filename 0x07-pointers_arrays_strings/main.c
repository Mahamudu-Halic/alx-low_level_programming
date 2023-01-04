#include <stdio.h>
#include <string.h>
void print_chessboard(char (*a)[8])
{
	int i, j;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		printf("\n");
	}
}

void print_diagsums(int *a, int size)
{
int i, j, sum = 0;

for (i = 0; i < size * size; i++)
{

if (i % (size + 1) == 0)
sum += *(a + i);
printf("%d\n", *(a + i));
}
printf("%d",sum);
putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int main(void)
// {
//     char board[8][8] = {
//         {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
//         {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
//         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
//         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
//         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
//         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
//         {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
//         {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
//     };
//     print_chessboard(board);
//     return (0);
// }

int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
