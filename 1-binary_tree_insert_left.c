#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @parent: is a pointer to the node that will be the parent of the inserted node
 * @value:  is the value to store in the inserted node
 *
 * Description - If parent already has a left-child, the new node must
 *				take its place, and the old left-child must be set as
 *				the left-child of the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_right->right = NULL;
	new_left->left = parent->left;
	parent->left = new;
	if (new_left->left)
		new_left->left->parent = new_left;
	return (new_left);
}
