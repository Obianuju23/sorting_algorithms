#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: The size of the array(i.e len(array)-1).
 */
void bubble_sort(int *array, size_t size)
{

	size_t i,j, len = size;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (array[j] > array[i + 1]);
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}			
		}
	}
	
}
