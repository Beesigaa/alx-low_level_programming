#include "lists.h"  // Include the appropriate header file
/**
* print_listint_safe - prints a listint_t linked list
* @listint: struct linked list
* @*head: pointer variable
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return count;
}
