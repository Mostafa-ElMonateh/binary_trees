#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: ptr to tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_eft = 0;
	size_t r_ight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l_eft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r_ight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l_eft > r_ight) ? l_eft : r_ight);
	}
}
