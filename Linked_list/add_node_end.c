#include "lists.h"
#include <string.h>

/**
 * _strlen - calculates the length of a string
 * @s: input string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *ptr;
    ptr = *head;
    if (head == NULL || str == NULL)
    {
        return (NULL);
    }
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->str = strdup(str);
    new_node->len = _strlen(new_node->str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;  // If the list is empty, make the head point to the new node
        return (new_node);
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next= new_node;
    return (new_node);
}
