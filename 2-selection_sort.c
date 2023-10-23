#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 *			order using the Selection sort algorithm
 * @array: the array of integers to sort
 * @size: size of the array
 * Return: Void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, sorted;
	int min;

	for (sorted = 0; sorted < size; sorted++)
	{
		min = array[sorted];
		j = sorted;
		for (i = sorted + 1; i < size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];
				j = i;
			}
		}
		if (j != sorted)
		{
			array[j] = array[sorted];
			array[sorted] = min;
			print_array(array, size);
		}
	}
}
