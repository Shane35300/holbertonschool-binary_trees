#include "binary_trees.h"
/**
 * binary_tree_node - function's name
 * Description: add a new tree node
 * @parent: the node parent
 * @value: the value added in the new node
 * Return: return the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
