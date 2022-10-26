#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of list
 * Return: none
 */

void free_listp2(listp_t **head)
{
	listp_t *x;
	listp_t *y;

	if (head != NULL)
	{
		y = *head;
		while ((x = y) != NULL)
		{
			y = y->next;
			free(x);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: head of list
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnd = 0;
	listp_t *x, *y, *z;
	listint_t *i;

	x = NULL;
	while (*h != NULL)
	{
		y = malloc(sizeof(listp_t));

		if (y == NULL)
			exit(98);

		y->p = (void *)*h;
		y->next = x;
		x = y;

		z = x;

		while (z->next != NULL)
		{
			z = z->next;
			if (*h == z->p)
			{
				*h = NULL;
				free_listp2(&x);
				return (nnd);
			}
		}

		i = *h;
		*h = (*h)->next;
		free(i);
		nnd++;
	}

	*h = NULL;
	free_listp2(&x);
	return (nnd);
}
