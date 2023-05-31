#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: ptr to tree
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count = 0;

	if (tree)
	{
		nodes_count += (tree->left || tree->right) ? 1 : 0;
		nodes_count += binary_tree_nodes(tree->left);
		nodes_count += binary_tree_nodes(tree->right);
	}
	return (nodes_count);
}
