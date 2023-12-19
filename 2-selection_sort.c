#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *lower;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		lower = array + i;

		for (j = i + 1; j < size; j++)
			lower = (array[j] < *lower) ? (array + j) : lower;

		if ((array + i) != lower)
		{

			swap(array + i, lower);
			print_array(array, size);

		}

	}
}
