#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (!tree ? 0 : !tree->left && !tree->right ? 1 :
		binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
