#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/

int main(void)
{

int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
return (0);

}
