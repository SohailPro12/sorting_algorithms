#include "sort.h"

/**
 * bubble_sort - sort array with bubble algorithm
 * @array: Unsorted  array of numbers
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
