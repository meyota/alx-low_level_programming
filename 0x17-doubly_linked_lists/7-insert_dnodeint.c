#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a nd=ew node at a given position.
  * @h: double pointer to list.
  * @idx: index of the list where the new node should be added.
  * @n: new node.
  *
  * Return: address of the new node or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int count = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*h == NULL)
	{
		*h = newNode;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp)
	{
		if (count == idx && idx != 0)
		{
			newNode->next = temp;
			newNode->prev = temp->prev;
			temp->prev->next = newNode;
			temp->prev = newNode;
			return (newNode);
		}
		count++;
		temp = temp->next;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
