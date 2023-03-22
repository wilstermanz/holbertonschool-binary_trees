#include "binary_trees.h"

/**
 * binary_tree_uncle - finds a uncle of a node
 * @node: node for which to find a uncle
 * Return: uncle of node, or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left);
}
