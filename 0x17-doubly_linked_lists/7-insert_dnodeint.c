#include "lists.h"

/**
 *
 * a given posituion
 *
 * @head: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node, or null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int i;

	new = NULL;
	if (idx == o)
		new = add_node_int(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new-> = n;
						new->next = head->next;
						new->prev = head;
						head->next-> = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new);
}

