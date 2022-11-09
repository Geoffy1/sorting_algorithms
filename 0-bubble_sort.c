#include "sort.h"

/**
 * swap_ints - Swap two int
 * @a: The first int to swap
 * @b: The second int to swap
 */
void swap_ints(int *a, int *b)
{
	int tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}

/**
 * bubble_sort - Sort an array of ints asce
 * @array: An array of ints to sort
 * @size: The size of the array
 *
 * Description: Prints the array after swp
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbles = false;

	if (array == NULL || size < 2)
		return;

	while (bubbles == false)
	{
		bubbles = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbles = false;
			}
		}
		len--;
	}
}
