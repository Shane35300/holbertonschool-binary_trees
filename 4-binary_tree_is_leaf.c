#include "binary_trees.h"
/**
 *binary_tree_is_leaf - name of the function
 *Description: check if the node is a leaf
 *@node: noeud
 *Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
