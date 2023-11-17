#include "sort.h"

/**
 * swap_nodes - Swap two nodes.
 * @n1: The first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t *n1, listint_t *n2)
{
	if (n1->prev)
		n1->prev->next = n2;
	if (n2->next)
		n2->next->prev = n1;
	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;

}

/**
 * insertion_sort_list -  insertion sort algorithm.
 * @list: the unsorted doubley linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *jer;

	if (!list || !*list || !(*list)->next)
		return;
	iter = (*list)->next;

	while (iter)
	{
		jer = iter;
		iter = iter->next;

		while (jer && jer->prev)
		{
			if (jer->prev->n > jer->n)
			{
				swap_nodes(j->prev, j);
				if (!jer->prev)
					*list = j;
				print_list((const listint_t *) *list);
			}
			jer = jer->prev;
		}
	}
}
