#include "search_algos.h"

/**
 * linear_search - searches for a value in array 
 * @array: pointer to array 
 * @size: size of array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("%s%u%s%d%s\n", "Value checked array[", i, "] = [", array[i], "]");
		if (value == array[i])
			return (i);
	}
	return (-1);
}
