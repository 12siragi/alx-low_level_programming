#include "lists.h"
/**
 * sum_dlistint - sums all the numbers in each node in the list
 * @head: head of the list
 * Return: the sum as integer.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
