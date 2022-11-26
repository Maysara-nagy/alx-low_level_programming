#include "lists.h"

/**
 * list_len - function to return the num of nudes
 * Return: the number of nodes
 * @h: the fking head
 */

size_t list_len(const list_t *h)
{
	int count1 = 0;

	while (h != NULL)
	{
		h = h->next;
		count1++;
	}
	return (count1);
}
