#include "binary_trees.h"

/**
 * binary_tree_preorder - function that deletes an entire binary tree
 * @func: pointer to a function to call for each node. The value in
 * the node must be passed as a parameter to this function.
 * @tree: binary tree to delete
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
