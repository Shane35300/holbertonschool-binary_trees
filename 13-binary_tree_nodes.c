#include "binary_trees.h"
/**
 * binary_tree_nodes - name of the function
 * Description: count the nodes parents
 * @tree: tree
 * Return: return the number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0;
	size_t nodes_right = 0;
	size_t parent = 0;

	if (tree == NULL)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		parent = 1;

	return (parent + nodes_left + nodes_right);
}
