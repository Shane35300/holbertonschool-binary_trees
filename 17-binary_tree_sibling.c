#include "binary_trees.h"

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
