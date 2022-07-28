#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;
	binary_tree_t *temp = NULL;

	new_right = malloc(sizeof(binary_tree_t));
	if (!new_right || !parent)
		return (NULL);


	new_right->n = value;
	new_right->parent = parent;
	new_right->left = new_right->right = NULL;
	if (!parent->right)
		parent->right = new_right;

	else
	{
		temp = parent->right;
		parent->right = new_right;
		new_right->right = temp;
		temp->parent = new_right;
	}
	return (new_right);
}
