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
int l;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10 ; j++)
{
for (k = 0; k < 10 ; k++)
{
for (l = 0; l < 10 ; l++)
{
if (i == j && k != l)
if (k != j || k != j)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
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
