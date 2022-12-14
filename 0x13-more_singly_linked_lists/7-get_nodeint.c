#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to head in function
 * @index: index of node to grab
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
