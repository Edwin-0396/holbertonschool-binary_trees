#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * aux_aux_binary_tree_height - measures the height from a noheighte in a binary tree
 * @tree: pointer to the noheighte to measure the height
 * Return: height of the pointer, or 0 if tree is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if(!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}

/**
 * aux_aux_binary_tree_height - measures the height from a noheighte in a binary tree
 * @tree: pointer to the noheighte to measure the height
 * Return: height of the pointer, or 0 if tree is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node)
		return (NULL);
	
	return (binary_tree_sibling(node->parent));

}