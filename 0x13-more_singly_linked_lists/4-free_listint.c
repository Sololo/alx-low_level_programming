#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of list
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *y;

	while ((y = head) != NULL)
	{
		head = head->next;
		free(y);
	}
}
