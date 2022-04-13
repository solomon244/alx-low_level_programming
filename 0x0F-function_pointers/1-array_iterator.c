#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls a function given a parameter on each element of array
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array != NULL && action != NULL)
{
	for (a = 0; a < size; a++)
		action(array[a]);
}
}
