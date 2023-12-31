#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that mesure the height of a binary tree
 * @tree : binary tree to be mesure
 * Return: the factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL)
		left_height++;
	if (tree->right != NULL)
		right_height++;

	return (left_height - right_height);

}
