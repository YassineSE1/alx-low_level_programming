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
for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 10 ; j++)
{
if (i < j && i != j)
{
putchar(i + '0');
putchar(j + '0');
if (i+j != 17) 
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
}
}
return (0);
}
