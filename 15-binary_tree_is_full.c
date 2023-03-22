#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 * Return: 1 if full, else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	return (tree &&
		((!tree->left && !tree->right) ||
		(binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right)))
		? 1 : 0);
}
