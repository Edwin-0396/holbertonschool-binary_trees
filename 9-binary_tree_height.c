#include "binary_trees.h"

/**
 * binary_tree_delete: function that deletes an entire binary tree
 * @tree: binary tree to delete
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if(!tree)
		return (0);

	if(!tree->left && !tree->right)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	if(height_l >= height_r)
		return (height_l + 1);
	return (height_r + 1);
}