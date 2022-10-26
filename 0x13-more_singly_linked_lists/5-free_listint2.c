#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of list
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *x;
	listint_t *y;

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
