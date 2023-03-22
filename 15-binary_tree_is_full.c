#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 * Return: 1 if full, else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftFull, rightFull;

	if (!tree)
	{
		return (0);
	}
	leftFull = binary_tree_is_full(tree->left);
	rightFull = binary_tree_is_full(tree->right);
	return ((!tree->left && !tree->right) || (leftFull && rightFull) ? 1 : 0);
}
