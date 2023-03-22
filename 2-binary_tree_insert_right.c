#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value to put in new node
 * Return: Pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent)
	{
		rightNode = binary_tree_node(parent, value);
		if (parent->right)
		{
			rightNode->right = parent->right;
			rightNode->right->parent = rightNode;
		}
		parent->right = rightNode;
		return (rightNode);
	}
	return (NULL);
}
