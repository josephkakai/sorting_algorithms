#include "sort.h"

/**
 * swap - Swaps values of pointers @a with @b
 * @a: The first pointer whose value is swapped 
 * @b: The second pointer whose value is swapped
 *
 * Return: void.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts array of integers in ascending order
 * using bubble sort algorithym.
 *
 * @array: The array to sort.
 * @size: The number of elements in @array.
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i,j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}	
		}
	}
}
