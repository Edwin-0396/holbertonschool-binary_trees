#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 * Return: pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = new->right = NULL;
	if (!parent->left)
		parent->left = new;

	else
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
		temp->parent = new;
	}
	return (new);
}
