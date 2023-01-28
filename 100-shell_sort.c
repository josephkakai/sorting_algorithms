#include "sort.h"

/**
 * swap - swaps values pointed by the pointers passed as parameters
 *  @a: The first pointer to swap value
 *  @b: The second pointer to swap value
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort -  Sorts an array of integers in ascending order using
 *  the Shell sort algorithm, using the Knuth sequence
 *  @array: Pointer to the first element of the array
 *  @size: Number of elements in the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;


	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
