#include "binary_trees.h"
/**
 * binary_tree_insert_right - function's name
 * Description: add a new tree node as the right-child
 * @parent: the node parent
 * @value: the value added in the new node
 * Return: return the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *ptr;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		ptr = parent->right;
		ptr->parent = new_node;
		new_node->right = ptr;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
