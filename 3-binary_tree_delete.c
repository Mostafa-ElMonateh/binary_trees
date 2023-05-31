#include "binary_trees.h"
/**
 * binary_tree_delete - delete a whole tree
 * @tree: ptr to a tree
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
