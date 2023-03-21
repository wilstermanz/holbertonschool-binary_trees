#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value to put in new node
 * Return: Pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode)
	{
		newNode->parent = parent;
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		return (newNode);
	}
	return (NULL);
}
