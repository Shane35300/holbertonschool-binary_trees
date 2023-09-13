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

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* La hauteur maximale est le maximum des hauteurs des sous-arbres plus 1 */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - function that mesure the height of a binary tree
 * @tree : binary tree to be mesure
 * Return: the factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
