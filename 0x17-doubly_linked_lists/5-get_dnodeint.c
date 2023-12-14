#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at index in a doubly linked list
 * @head: head of list
 * @index: the number of the node to get
 * Return: The desired node or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
