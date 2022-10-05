#include "search_algos.h"

/**
 * print_subarray - prints a subarray
 * @array: pointer to array
 * @first: index of first element to print
 * @last: index of last element to print
 */

void print_subarray(int *array, size_t first, size_t last)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = first; i < last; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - search for value in sorted int array using Binary search alg
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 * Return: index of first match or -1 
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = 0;
	size_t half = 0;

	if (array == NULL || size == 0)
		return (-1);

	last = size - 1;

	while (first <= last)
	{
		print_subarray(array, first, last);
		half = (first + last) / 2;
		if (array[half] > value)
			last = half - 1;
		else if (array[half] < value)
			first = half + 1;
		else
			return (half);
	}
	return (-1);
}
