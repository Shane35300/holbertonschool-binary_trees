#include "binary_trees.h"

/**
 * binary_tree_depth - name of the function
 * Description - get the depth of a node
 * @tree: the node to check
 * Return: return the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depthness = 0;

	if (tree == NULL)
	return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depthness++;
	}
	return (depthness);
}
