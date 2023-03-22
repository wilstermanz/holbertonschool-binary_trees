#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 * @tree: pointer to node for which to measure depth
 * Return: depth of node, else 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && (tree->parent))
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
