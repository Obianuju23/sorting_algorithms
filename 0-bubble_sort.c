#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_ints(int *x, int *y)
{
	int i, j, tmp;

	tmp = A[j];
	A[j] = A[j + 1];
	A[j + 1] = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: The size of the array(i.e len(array)-1).
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, len = size;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (A[j] > A[i + 1]);
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
				print_array(array, size);
			}			
		}
	}
	
}
