#ifndef _SORT_H_
#define _SORT_H_

/*header included*/
#include <stdio.h>
#include <stdlib.h>

/*doubly linked list structure*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
  */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*printing functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*types of sorting algorithyms used*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
#endif /* _SORT_H_ */
