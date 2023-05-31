#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node is a leaf ?
 * @node: checked node
 * Return: 1 is a leaf or 0 is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
