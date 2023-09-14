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
 *binary_tree_preorder_bis - name of the function
 *Description: goes throught a binary tree using preorder
 *@tree: root
 *@func: the function to call for each node
 */
void binary_tree_preorder_bis(const binary_tree_t *tree, void (*func)(int), size_t i)
{
	size_t j = 0;
	binary_tree_t *ptr = (binary_tree_t *)tree;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_preorder_bis(tree->left, func, i);

	binary_tree_preorder_bis(tree->right, func, i);

	while (ptr->parent != NULL)
	{
		ptr = ptr->parent;
		j++;
	}
	if (j == i)
		func(tree->n);

	return;
}
/**
 * Binary_tree_levelorder - name of the function
 * Description:
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i = 0;
	size_t height;

	height = binary_tree_height(tree);

	while (i <= height)
	{
		binary_tree_preorder_bis(tree, func, i);
		i++;
	}
	return;
}
