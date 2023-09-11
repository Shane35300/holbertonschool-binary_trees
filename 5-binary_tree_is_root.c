#include "binary_trees.h"
/**
 * binary_tree_is_root - name of the function
 *Description: check if the node is a root
 *@node: the node to check
 *Return: 1 or 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
