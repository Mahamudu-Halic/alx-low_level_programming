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