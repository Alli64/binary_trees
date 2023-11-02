#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of
 * another in binary tree
 *
 *
 * @parent: pointer to node to insert the left child in
 * @value: the value to store in new node
 * Return: if parent is NULL or error occurs - NULL
 * 		otherwise - pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
