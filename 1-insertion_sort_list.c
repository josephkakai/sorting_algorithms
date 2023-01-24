#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap
 */
void swap_node(listint_t **head, listint_t *node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
	{
		node2->next->prev = *node1;
	}
	node2-prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node = node2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers 
 * using the insertion sort algorithym.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iterate, *insert, *tmp;

	if(list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iterate = (*list)->next; iterate != NULL; iterate = tmp)
	{
		tmp = iter->next;
		insert = iterate-prev;
		while (insert != NULL && iterate->n < insert->n)
		{
			swap_nodes(list, &insert, iterate);
			print_list((const listint_t *)*list);
		}
	}
}
