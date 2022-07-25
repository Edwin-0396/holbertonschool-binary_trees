#include "binary_trees.h"

/**
 * binary_tree_node -  function that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
	binary_tree_t *B_tree_node = NULL;

	B_tree_node = (void *)malloc(sizeof(binary_tree_t));
	if(!B_tree_node)
		return (NULL); 

	B_tree_node->n = value;
	B_tree_node->parent = parent;
	B_tree_node->left = NULL;
	B_tree_node->right = NULL;

	return (B_tree_node);
 }