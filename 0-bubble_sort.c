#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 *		order using the Bubble sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 * Return: no return.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;
	int temp;

	if (size <= 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}
