#include "lists.h"  // Include the appropriate header file
/**
* reverse_listint - Function pointer that reverses a listint_t linked list
* @listint: struct
* @**head: Pointer pointer variable
* Return - head 
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL) 
	{
		listint_t *next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return *head;
}
