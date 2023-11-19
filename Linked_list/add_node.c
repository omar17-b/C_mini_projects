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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

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
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = _strlen(new_node->str);

    new_node->next = *head;

    *head = new_node;

    return (new_node);
}
