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
	int count1 = 0;

	list_t *ptr = h;
	if (h->str == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		count1++;
		ptr = ptr->next;
	}
	return (count1);
}
