#include "binary_trees.h"

/**
 * binary_tree_size - return size of a tree
 * @tree: ptr to tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r_ight = 0, l_eft = 0, size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l_eft = binary_tree_size(tree->left);
	r_ight = binary_tree_size(tree->right);
	size = r_ight + l_eft + 1;
	return (size);
}
