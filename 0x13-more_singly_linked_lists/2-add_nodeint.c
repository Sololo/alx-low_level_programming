#include "lists.h"

/**
 * add_nodeint - add a new node at the start
 * of a list
 * @head: head of list
 * @n: n element
 * Return: address of the new element. NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (*head);
}
