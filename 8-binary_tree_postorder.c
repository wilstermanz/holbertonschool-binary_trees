#include "binary_trees.h"

/**
 * binary_tree_postorder - tranverses a binary tree in postorder
 * @tree: pointer to root node of tree
 * @func: function pointer to call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
