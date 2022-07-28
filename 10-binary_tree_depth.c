#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: binary tree to delete
 * Return: tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height_depth = 0;

	if (!tree->parent)
		return (0);

	height_depth = binary_tree_depth(tree->parent);
	return (height_depth + 1);
}
