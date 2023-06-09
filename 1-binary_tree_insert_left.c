#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value to put in new node
 * Return: Pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent)
	{
		leftNode = binary_tree_node(parent, value);
		if (parent->left)
		{
			leftNode->left = parent->left;
			leftNode->left->parent = leftNode;
		}
		parent->left = leftNode;
		return (leftNode);
	}
	return (NULL);
}
