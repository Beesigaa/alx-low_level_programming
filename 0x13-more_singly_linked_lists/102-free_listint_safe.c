#include "lists.h"
#include <stddef.h>
/**
* free_listint_safe - hat frees a listint_t list
* @listint_t: struct
* @**h: pointer to pointer variable
* Return: returns count
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	while (*h != NULL)
	{
		listint_t *temp = *h;
		if (*h <= (*h)->next)
		{
			*h = NULL;
			free(temp);
			count++;
			break;
		}
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return count;
}
