#include "binary_trees.h"

/**
 * binary_tree_delete: function that deletes an entire binary tree
 * @tree: binary tree to delete
 */

 size_t binary_tree_size(const binary_tree_t *tree)
 {
	size_t total_size_left = 0, total_size_right = 0;

	if(!tree)
		return (0);

	total_size_left = binary_tree_size(tree->left);
	total_size_right = binary_tree_size(tree->right);
	return(total_size_left + total_size_right + 1);
 }