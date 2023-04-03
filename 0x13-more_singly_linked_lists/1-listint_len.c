#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: linked list
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		num++;
		p = p->next;
	}
	return (num);
}
