#include "binary_trees.h"

/**
 * binary_tree_delete: function that deletes an entire binary tree
 * @tree: binary tree to delete
 */

size_t aux_binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if(!tree)
		return (0);

	height_l = aux_binary_tree_height(tree->left);
	height_r = aux_binary_tree_height(tree->right);
	if(height_l >= height_r)
		return (height_l + 1);
	return (height_r + 1);
}

/**
* binary_tree_balance - function that measures the balance factor of a binary tree
* @tree: 
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	if(!tree)
		return (0);

	return (aux_binary_tree_height(tree->left) - aux_binary_tree_height(tree->right));
}