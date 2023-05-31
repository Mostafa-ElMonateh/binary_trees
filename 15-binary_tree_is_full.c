#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full or not
 * @tree: ptr to tree
 * Return: 1 is full or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree->right && tree->left)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (left == 0 || right == 0)
				return (0);
			return (1);
		}
		else if (!tree->right && !tree->left)
			return (1);
		else
			return (0);
	}
}