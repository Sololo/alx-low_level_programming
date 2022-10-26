#include "lists.h"

/**
 * free_listp -frees a linked list
 * @head: head of a list
 * Return: none
 */

voide free_listp(listp_t **head)
{
	listp_t *x;
	listp_t *y;

	if (head != NULL)
	{
		y = *head;
		while ((x = y) != NULL)
		{
			y = y->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnd = 0;
	listp_t *x, *y, *z;

	x = NULL;
	while (head != NULL)
	{
		y = malloc(sizeof(listp_t));

		if (y == NULL)
			exit(98);

		y->p = (void *)head;
		y->next = x;

		z = x;

		while (z->next != NULL)
		{
			z = z->next;
			if (head == z->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&x);
				return (nnd);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnd++;
	}

	free_listp(&x);
	return (nnd);
}
