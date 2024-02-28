#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to be created
 * @value: - this will be the value of the new node
 * Return: points to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaring the new node with its data type */
	binary_tree_t *newNode;

	/* allocate memory  for the new node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* return a pointer to the node */
	return (newNode);
}
