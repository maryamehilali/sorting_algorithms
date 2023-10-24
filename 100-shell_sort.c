#include "sort.h"
/**
 * shell_sort - function that sorts an array of integers in ascending order
 *		using the Shell sort algorithm, using the Knuth sequence
 * @array: the array to sort
 * @size: size of the array
 * Return: void
*/
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	gap = 1;
	while (gap < size)
		gap = gap * 3 + 1;
	gap = (gap - 1) / 3;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j > gap - 1 && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
