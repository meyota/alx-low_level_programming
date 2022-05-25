#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *end;
size_t num_char;

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);

new->str = strdup(str);

for (num_char = 0; str[num_char]; num_char++)
	;

new->len = num_char;
new->next = NULL;
end = *head;

if (end == NULL)
{
*head = new;
}
else
{
while (end->next != NULL)
	end = end->next;
end->next = new;
}
return (*head);
}

