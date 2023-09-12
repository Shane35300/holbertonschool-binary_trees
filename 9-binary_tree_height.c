#include "binary_trees.h"
#include <stdio.h>

size_t calculate_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = calculate_tree_height(tree->left);
	size_t right_height = calculate_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *ptr = tree; // Utilisation const pour ptr
	size_t total_height;
	size_t i = 0;

	if (tree == NULL)
		return (0);

	while (ptr->parent != NULL)
		ptr = ptr->parent;

	total_height = calculate_tree_height(ptr);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		i++;
	}

	return ((total_height - 1) - i);
}
