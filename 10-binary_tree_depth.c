#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node from root
 * @tree: ptr to a node
 * Return: measure of depth or 0 is the root
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
