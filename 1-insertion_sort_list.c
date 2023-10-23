#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 *			in ascending order using the Insertion sort algorithm
 * @list: head of the linked list
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *avant, *apres, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	ptr = (*list)->next;
	while (ptr)
	{
		temp = ptr->next;
		if (ptr->n < ptr->prev->n)
		{
			while (ptr && ptr->n < ptr->prev->n)
			{
				avant = ptr->prev;
				apres = ptr->next;
				avant->next = apres;
				if (apres)
					apres->prev = avant;
				ptr->next = avant;
				ptr->prev = avant->prev;
				avant->prev = ptr;
				if (ptr->prev == NULL)
					*list = ptr;
				else
					ptr->prev->next = ptr;
				print_list(*list);
				if (*list == ptr)
					break;
			}}
		ptr = temp;
	}
}
