#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers in ascending order
 *		using the Quick sort algorithm
 * @array: the array to sort
 * @size: size of the array
 * Return: Void
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort_subarray(array, size, 0, size - 1);
}
/**
 * sort_subarray - function that sorts an array using the Quick sort algorithm
 * @array: the array to sort
 * @size: size of the array
 * @start: startin point of the sub_array
 * @end: the end of the sub_array
 * Return: Void
*/
void sort_subarray(int *array, size_t size, int start, int end)
{
	int part;

	if (start < end)
	{
		part = lomuto_partition(array, size, start, end);
		sort_subarray(array, size, start, part - 1);
		sort_subarray(array, size, part + 1, end);
	}
}
/**
 * lomuto_partition - devide the array into sub_arrays using lamotu partition
 * @array: the array to sort
 * @size: size of the array
 * @start: starting point of the sub_array
 * @end: the end of the sub_array
 * Return: Void
*/
int lomuto_partition(int *array, size_t size, int start, int end)
{
	int i, sorted;
	int key, *pivot;

	sorted = start;
	pivot = array + end;
	for (i = start; i < end ; i++)
	{
		if (array[i] < *pivot)
		{
			if (sorted < i)
			{
				key = array[i];
				array[i] = array[sorted];
				array[sorted] = key;
				print_array(array, size);
			}
			sorted++;
		}
	}
	if (array[sorted] > *pivot)
	{
		key = array[i];
		array[i] = array[sorted];
		array[sorted] = key;
		print_array(array, size);
	}
	return (sorted);
}
