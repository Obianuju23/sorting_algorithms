#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_ints(int *x, int *y)
{
	int x, y, tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: The size of the array(i.e len(array)-1).
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == False)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
