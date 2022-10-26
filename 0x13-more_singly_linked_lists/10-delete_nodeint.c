#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list
 * @head: head of a list
 * @index: index of the list where the node is
 * deleted
 * Return: 1 if Successfull, -1 if Failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *x;
	listint_t *next;

	x = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && x != NULL; i++)
		{
			x = x->next;
		}
	}

	if (x == NULL || (x->next == NULL && index != 0))
	{
		return (-1);
	}

	next = x->next;

	if (index != 0)
	{
		x->next = next->next;
		free(next);
	}
	else
	{
		free(x);
		*head = next;
	}

	return (1);
}
