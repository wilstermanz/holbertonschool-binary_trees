#include "binary_trees.h"

/**
 * binary_tree_inorder - tranverses a binary tree in order
 * @tree: pointer to root node of tree
 * @func: function pointer to call for each node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
