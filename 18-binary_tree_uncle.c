#include "binary_trees.h"
/**
 * binary_tree_sibling - name of the function
 * Description: find the brother of a node
 * @node: the node concerned
 * Return: return a pointer to the node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	return (NULL);

	if (node->parent == NULL)
	return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right == NULL)
		return (NULL);
		else
		return (node->parent->right);
	}
	else
	{
		if (node->parent->left == NULL)
		return (NULL);
		else
		return (node->parent->left);
	}
}
/**
 * binary_tree_uncle - name of the function
 * Description: find the uncle of a node
 * @node: the node concerned
 * Return: return a pointer to the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
	return (NULL);

	if (node->parent == NULL)
	return (NULL);

	uncle = binary_tree_sibling(node->parent);

	if (uncle == NULL)
	return (NULL);

	else
	return (uncle);
}
