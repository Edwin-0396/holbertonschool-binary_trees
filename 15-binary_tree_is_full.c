#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
**/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if(!tree)
		return (0);

	height_l = binary_tree_is_full(tree->left);
	height_r = binary_tree_is_full(tree->right);
	if (height_l == height_r)
		return (1);
	return (0);
}