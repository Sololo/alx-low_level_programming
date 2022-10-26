#include "lists.h"

/**
 * pop_listint - deletes a head node of
 * a linked list
 * @head: head of list
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listsint_t *y;

	if (*head == NULL)
		return (0);

	y = *head;
	
	hnode = y->n;
	
	h = y->next;
	
	free(y);

	*head = h;

	return (hnode);
}
