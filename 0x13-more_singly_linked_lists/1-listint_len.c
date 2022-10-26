#include "lists.h"

/**
 * listint_len - return number of elements in
 * a list
 * @h: head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nnds = 0;

	while (h != NULL)
	{
		h = h->next;
		nnds++;
	}
	return (nnds);
}
