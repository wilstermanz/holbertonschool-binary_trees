#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of a binary tree
 * Return: number of nodes with at least one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (!tree || (!tree->left && !tree->right) ? 0 :
		binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
