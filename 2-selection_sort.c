#include "sort.h"

/**
 * selection_sort - the selection sort algorithm
 * @array: the unsorted array to sort
 * @size: the size fo the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, small_idx;
	int temp;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		small_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small_idx])
				small_idx = j;
		}

		if (small_idx != i)
		{
			temp = array[small_idx];
			array[small_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
