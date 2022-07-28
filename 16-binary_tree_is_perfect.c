#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * aux_aux_binary_tree_height - measures the height from a noheighte in a binary tree
 * @tree: pointer to the noheighte to measure the height
 * Return: height of the pointer, or 0 if tree is NULL
 */

int aux_binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = 1 + aux_binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + aux_binary_tree_height(tree->right);
	return (right_height > left_height ? right_height : left_height);
}

/**
**/

/* This function tests if a binary tree is perfect
   or not. It basically checks for two things :
   1) All leaves are at same level
   2) All internal noheightes have two chilheightren */
int isPerfectRec(const binary_tree_t *root, int height, int level)
{
    if (root == NULL)
        return (0);
 
    if (root->left == NULL && root->right == NULL)
        return (height == level ? 1 : 0);
 
    if (root->left == NULL || root->right == NULL)
        return (0);

    return isPerfectRec(root->left, height, level+1) *
           isPerfectRec(root->right, height, level+1);
}



int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (isPerfectRec(tree, aux_binary_tree_height(tree), 0));
}