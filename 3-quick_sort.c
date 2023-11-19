#include "sort.h"

/**
 * swap - swap two
 * @array: the unsorted array
 * @size: the size of the array
 * @n1: number 1
 * @n2: number 2
 */
void swap(int *array, size_t size, int *n1, int *n2)
{
	if (*n1 != *n2)
	{
		*n1 = *n1 + *n2;
		*n2 = *n1 - *n2;
		*n1 = *n1 - *n2;
		print_array((const int *)array, size);
	}
}
/**
 * lomuto_partition - turn the array into partitions
 * @array: the unsorted array
 * @size: the size of the array
 * @small: the small index
 * @high: the high index
 * Return: size_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t small, ssize_t high)
{
	int i, j, pivot = array[high];

	for (i = j = small; j < high; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[high]);
	return (i);
}

/**
 * qs - qs
 * @array: unsorted array
 * @size: the size of the array
 * @small: the small index
 * @high: the high index
 */
void qs(int *array, size_t size, ssize_t small, ssize_t high)
{
	size_t part;

	if (small < high)
	{
		part = lomuto_partition(array, size, small, high);

		qs(array, size, small, part - 1);
		qs(array, size, part + 1, high);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	qs(array, size, 0, size - 1);
}
