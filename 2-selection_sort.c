#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: pointer
 * @size: Size
 *
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t a = 0;
	int est;
	size_t b = 0;
	int *dav = NULL;
	int *pea = NULL;
	int mea = 0;
	int ceo;

	if (size <= 1)
		return;

	for (a = 0 ; a < size ; a++)
	{
		ceo = 0;
		mea = a;
		dav = &array[a];
		for (b = a ; b < size ; b++)
		{
			pea = &array[b];
			if (*pea < *dav)
			{
				mea = b;
				dav = &array[mea];
				ceo = 1;
			}
		}
		if (ceo == 1)
		{
			dav = &array[a];
			pea = &array[mea];
			est = *dav;
			*dav = *pea;
			*pea = est;
			print_array(array, size);

		}
	}
}
