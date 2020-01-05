#include "monty.h"
/**
 * _swap - Funtion that swap the last valeus.
 * @h: Stack.
 * @count: count of the line where the opcode is taken.
 * Return: Void
 */
void _swap(stack_t **h, unsigned int count)
{
	stack_t *two, *one, *tmp;
	int i = 0;

	two = (*h);

	while (two)
	{
		i++;
		two = two->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		exit(EXIT_FAILURE);
        }
	one = two->prev;
	tmp = one;
	one->next = NULL;
	one->prev = two;
	two->next = one;
	two->prev = tmp->prev;
	free(*h);
}
