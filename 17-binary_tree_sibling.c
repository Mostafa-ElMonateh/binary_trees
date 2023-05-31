#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: ptr to checked node
 * Return: ptr to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}