#include "sort.h"

/**
 * swap - swap two integers in the array
 * @a: The first integer to swap
 * @b: the second integer to swap
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers from low to high
 * @array: an array of integers
 * @size: the size of the array
 * Description: prints the array after eachswap
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}

}
