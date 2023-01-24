#include "sort.h"

/**
 *swap_nodes -function that swaps nodes
 *@head: pointer to head of the list
 *@nodes1: pointer to the first node to swap
 *@nodes2: the second node to swap
 */

void swap_nodes(listint_t **head, listint_t **nodes1, listint_t *nodes2)
{
	(*nodes1)->next = nodes2->next;
	if (nodes2->next != NULL)
		nodes2->next->prev = *nodes1;

	nodes2->prev = (*nodes1)->prev;
	nodes2->next = *nodes1;
	if ((*nodes1)->prev != NULL)
		(*nodes1)->prev->next = nodes2;
	else
		*head = nodes2;
	(*nodes1)->prev = nodes2;
	*nodes1 = nodes2->prev;
}

/**
 *insertion_sort_list - function that sorts a doubly
 *linked list in insertion algorithm
 *@list: pointer to head of a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = temp)
	{
		temp = i->next;
		insert = i->prev;
		while (insert != NULL && i->n < insert->n)
		{
			swap_nodes(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}
