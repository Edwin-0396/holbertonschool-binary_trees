#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total_size_left = 0, total_size_right = 0;

	if (!tree)
		return (0);

	total_size_left = binary_tree_size(tree->left);
	total_size_right = binary_tree_size(tree->right);
	return (total_size_left + total_size_right + 1);
}
