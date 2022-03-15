#include "main.h"

/**
 * main - prints prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char array[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(array[i]);
	}
	_putchar('\n');

	return (0);
}
