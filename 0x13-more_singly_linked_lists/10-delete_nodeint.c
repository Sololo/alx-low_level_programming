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
	listint_t *y;

	x = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && x != NULL; i++)
		{
			x = x->y;
		}
	}

	if (x == NULL || (x->y == NULL && index != 0))
	{
		return (-1);
	}

	y = x->y;

	if (index != 0)
	{
		x->y = y->y;
		free(y);
	}
	else
	{
		free(x);
		*head = y;
	}

	return (1);
}
