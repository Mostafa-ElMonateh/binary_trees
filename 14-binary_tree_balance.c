#include "binary_trees.h"

/**
 * binary_tree_height_b - measures height of a binary tree
 * @tree: ptr to tree
 * Return: height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l_eft = 0;
	size_t r_ight = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree)
		{
			l_eft = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r_ight = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l_eft > r_ight) ? l_eft : r_ight);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}