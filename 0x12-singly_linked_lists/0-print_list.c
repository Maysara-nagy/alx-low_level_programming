#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to printf all the data in list_t my node
 * @h: my head node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count1 = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count1++;
		h = h->next;
	}
	return (count1);
}
