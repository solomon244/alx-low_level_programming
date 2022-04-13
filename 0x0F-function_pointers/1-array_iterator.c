#include "function_pointers.h"
#include <stdlib.h>

/**
  *array_iterator - function that executes function given as a parameter 
  *@array: array of elements.
  *@size: size of array.
  *@action: function pointer.
  *
  *Return: void.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
