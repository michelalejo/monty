#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 *  print_dlistint - function that prints all the elements of a dlist
 * @h : const - list_t
 *
 *
 * Return: the number of notes.
 */
size_t print_dlistint(const stack_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}