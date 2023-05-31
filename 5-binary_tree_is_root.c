#include "binary_trees.h"

/**
 * binary_tree_is_root - check node is a root ?
 * @node: checked node
 * Return: 1 is a root or 0 is not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
