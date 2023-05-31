#include "binary_trees.h"
/**
 * tree_is_perfect - checks if a tree is perfect or not
 * @tree: ptr to tree
 * Return: 0 not a perfect or other number refer to level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l_eft = 0, r_ight = 0;

	if (tree->left && tree->right)
	{
		l_eft = 1 + tree_is_perfect(tree->left);
		r_ight = 1 + tree_is_perfect(tree->right);
		if (r_ight == l_eft && r_ight != 0 && l_eft != 0)
			return (r_ight);
		return (0);
	}
	else if (!tree->right && !tree->left)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - checks if perfect or not tree
 * @tree: ptr to tree
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);
	result = tree_is_perfect(tree);
	if (result != 0)
		return (1);
	return (0);
}