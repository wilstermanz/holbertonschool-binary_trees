#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		return (
			binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right)
			);
	}
	return (0);
}
