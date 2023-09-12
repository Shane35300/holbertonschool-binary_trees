#include "binary_trees.h"
/**
 * binary_tree_balance - function that mesure the height of a binary tree
 * @tree : binary tree to be mesure
 * Return: the factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 1;
	int right_height = 1;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_height >= right_height)
		{
			printf("%d", left_height);
			left_height = left_height + 1;
		}
		else if (left_height <= right_height)
		{
			right_height = right_height + 1;
		}
	}
	if (tree->left == NULL && tree->right == NULL)
		return (2);

	return (right_height - right_height);
}
