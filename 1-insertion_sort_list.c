#include "sort.h"

/**
 * node_swap - swaps two nodes in a doubly linked list
 * @head: a pointer to the head of a doubly linked list
 * @node1: a pointer to the first node to swap
 * @node2: the second node to swap
 */

void node_swap(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;

	node2->prev = (*node1)->prev;
	node2->next = *node1;

	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}


/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: A pointer to the head of a doubly-linked list of integers.
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iterate, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iterate = (*list)->next; iterate != NULL; iterate = temp)
	{

		temp = iterate->next;
		insert = iterate->prev;

		while (insert != NULL && iterate->n < insert->n)
		{
			node_swap(list, &insert, iterate);

			print_list((const listint_t *)*list);
		}
	}
}
