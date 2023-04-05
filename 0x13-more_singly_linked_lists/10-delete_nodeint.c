/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list
 * @head: A pointer to the head of the linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
prev = current;
current = current->next;
}

prev->next = current->next;
free(current);

return (1);
}
