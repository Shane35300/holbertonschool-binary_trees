#include "binary_trees.h"
/**
*binary_tree_height - function that mesure the height of a binary tree
 * @tree : binary tree to be mesure
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t height = 1;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_height > right_height)
		{
			height = left_height + 1;
		}
		else
		{
			height = right_height + 1;
		}
	}
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (height);
}
