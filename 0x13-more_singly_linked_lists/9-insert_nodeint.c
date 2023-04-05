#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head node of the list
 * @idx: index where the new node should be added (starting from 0)
 * @n: integer value to be stored in the new node
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp_node;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp_node = *head;
for (i = 0; i < idx - 1; i++)
{
if (temp_node == NULL || temp_node->next == NULL)
{
free(new_node);
return (NULL);
}
temp_node = temp_node->next;
}

new_node->next = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
