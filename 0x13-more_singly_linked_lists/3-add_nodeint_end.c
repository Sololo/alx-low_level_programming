#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a list
 * @head: head of a list
 * @n: n element
 * Return: address of the new element. NLL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y;

	(void)y;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;
	y = *head;
	if (*head == NULL)
	{
		*head = x;
	}
	else
	{
		while (y->next != NULL)
		{
			y = y->next;
		}
		y->next = x;
	}

	return (*head);
}
