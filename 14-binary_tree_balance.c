#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: ptr to a tree
 * Return: 0 if NULL or the balance number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures height of binary tree
 * @tree: ptr to a tree
 * Return: 0 if NULL or return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
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
