#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * dlistint_len - length of chain
 * @h : head
 *
 * Return: Length
 */
size_t dlistint_len(const dlistint_t *h)
{
        size_t length = 0;

        if (h != NULL)
        {
                length++;
                while (h->next != NULL)
                {
                        length++;
                        h = h->next;
                }
        }
        else
                return (0);
        return (length);
}

/**
 * get_dnodeint_at_index - renvoi l'index d'un noeud dans une liste
 * @head : head
 * @index : index du noeud
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *ptr_node;
        unsigned int i = 0;

        ptr_node = head;
        if (index == 0 && head != NULL)
                return (head);
        if (index == 0 && head == NULL)
                return (NULL);
        while (ptr_node != NULL && ptr_node->next != NULL && i < index)
        {
                ptr_node = ptr_node->next;
                i++;
        }
        if (ptr_node != NULL && i == index)
                return (ptr_node);
        else
                return (NULL);

}


/**
 * insert_dnodeint_at_index - insert a node in the position n 
 * @h : head
 * @idx : position to add
 * @n : value to add
 *
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr_node, *ptr_node_prev;

	/* si la longueur de la chaine est < idx return null */ 
	if (dlistint_len(*h) < idx)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->next = NULL;
	new_node->prev = NULL;

	new_node->n = n;
	
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return new_node;
	}
	
	ptr_node = get_dnodeint_at_index(*h, idx);
	if (ptr_node == NULL)
	{
		return new_node;
	}

	if (idx > 0)
	{
		ptr_node_prev = get_dnodeint_at_index(*h, idx-1);
	}
	else
		ptr_node_prev = NULL;

	new_node->next = ptr_node;
	new_node->prev = ptr_node_prev;

	if (ptr_node_prev != NULL)
		ptr_node_prev->next = new_node;

	if (ptr_node != NULL)
		ptr_node->prev = new_node;

	if (*h == NULL)
	{
		*h = new_node;
	}
	return new_node;
}
