#include "binary_trees.h"
/**
 * binary_tree_leaves - returns number of leaves in tree
 * @tree: ptr to tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_eft = 0, r_ight = 0, leaf = 0;

	if (tree == NULL)
		return (0);
	l_eft = binary_tree_leaves(tree->left);
	r_ight = binary_tree_leaves(tree->right);
	leaf = l_eft + r_ight;
	return ((!l_eft && !r_ight) ? leaf + 1 : leaf + 0);
}