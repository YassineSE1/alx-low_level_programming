#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/

int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10 ; j++)
{
for (k = 0; k < 10 ; k++)
{
if (i < j && i != j)
if (j < k && j != k && i != k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i + j + k != 24)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
}
}
}
return (0);
}
