#include "binary_trees.h"

/**
 * binary_tree_height_b - measures height of a binary tree
 * @tree: ptr to tree
 * Return: height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_eft = 0, r_ight = 0;

		l_eft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_ight = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_eft > r_ight) ? l_eft : r_ight);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
