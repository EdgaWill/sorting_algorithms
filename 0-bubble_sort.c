#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: pointer
 * @size: the array
 * return: array
 */

void bubble_sort(int *array, size_t size)
{
	size_t es, a, e;

	if (array == NULL)
		return;
	for (a = 0 ; a < size - 1; a++)
	{
		for (e = 0 ; e < size - 1; e++)
		{
			if (array[e] > array[e + 1])
			{
				es = array[e];
				array[e] = array[e + 1];
				array[e + 1] = es;
				print_array(array, size);
			}
		}
	}
}
