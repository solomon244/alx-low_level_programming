#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - writes 0-9
 * Description: Writes 0-9 with comma and space
 *
 * Return: 0 for success
*/
int main(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (x = 'a'; x < 'g'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
