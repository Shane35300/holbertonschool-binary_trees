#include "main.h"
/**
 * binary_tree_t - function's name
 * Description: add a new tree node
 * @parent: the node parent
 * @value: the value added in the new node
 * Return: return the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		new_node->parent = parent;

		if (value < parent->n)
		{
			parent->left = new_node;
		}
		else if (value > parent->n)
		{
			parent->right = new_node;
		}
	}
	if (parent == NULL)
	{
		new_node->parent = NULL;
	}
	return (new_node);
}
