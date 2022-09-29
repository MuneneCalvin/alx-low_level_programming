#include "lists.h"

/**
 * dlistint list
 * Return : the no. of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	count = 0;
	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->);
		count++;
		h = h->next;
	}

	return (count);
}

