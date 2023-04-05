#include "binary_trees.h"
#include <limits.h>

/**
 * bst_checker - checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: pointer to the root node of the tree to check
 * @min: low range of tree->n
 * @max: upper range of tree->n
 * Return: return 1 if tree is a valid BST, and 0 otherwise
*/
int bst_checker(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
	{
		return (1);
	}
	if (tree->n < min || tree->n > max)
	{
		return (0);
	}
	return (bst_checker(tree->left, min, tree->n - 1) &&
		bst_checker(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: pointer to the root node of the tree to check
 * Return: return 1 if tree is a valid BST, and 0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (bst_checker(tree, INT_MIN, INT_MAX));
}
