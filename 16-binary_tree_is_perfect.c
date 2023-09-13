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

/**
 * binary_tree_is_full - Check if a binary tree is full (complete).
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}

	return (0);
}
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int is_full = binary_tree_is_full(tree);
	int is_balanced = binary_tree_balance(tree);

	return (is_full && is_balanced == 0);
}
