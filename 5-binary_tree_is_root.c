#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 * Return: 1 if node is a root, else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
	{
		return (1);
	}
	return (0);
}
