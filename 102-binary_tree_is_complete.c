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
 * check_condition_2 - name of the function
 * Description: check if the condition_2 is true
 * @tree: root
 * @i: the level pointed
 * Return: return 0 or 1
 */
int check_condition_2(const binary_tree_t *tree, size_t i)
{
	size_t left_result;
	size_t right_result;
	size_t j = 0;
	binary_tree_t *ptr = (binary_tree_t *)tree;

	if (tree == NULL)
	{
		return (0);
	}

	left_result = check_condition_2(tree->left, i);

	right_result = check_condition_2(tree->right, i);

	if (left_result == 0 || right_result == 0)
	return (0);

	while (ptr->parent != NULL)
	{
		ptr = ptr->parent;
		j++;
	}
	if (j == i)
	{
		if (tree->left == NULL && tree->right != NULL)
			return (0);
	}
	return (1);
}
/**
 * check_condition_1 - name of the function
 * Description: check if the condition_1 is true
 * @tree: root
 * @i: the level pointed
 * Return: return 0 or 1
 */
int check_condition_1(const binary_tree_t *tree, size_t i)
{
	size_t left_result;
	size_t right_result;
	size_t j = 0;
	binary_tree_t *ptr = (binary_tree_t *)tree;

	if (tree == NULL)
	{
		return (0);
	}

	left_result = check_condition_1(tree->left, i);

	right_result = check_condition_1(tree->right, i);

	if (left_result == 0 || right_result == 0)
	return (0);

	while (ptr->parent != NULL)
	{
		ptr = ptr->parent;
		j++;
	}
	if (j == i)
	{
		if (tree->left == NULL || tree->right == NULL)
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_complete - name of the function
 * Description: check if the tree is complete
 * @tree: the tree
 * Return: return 1 if true 0 if false
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int check1, check2;
	size_t i = 0;
	size_t height;

	height = binary_tree_height(tree);

	if (height > 1)
	{
		while (i <= height - 2)
		{
			printf("%ld\n", i);
			check1 = check_condition_1(tree, i);
			if (check1 == 0)
				return (0);
			i++;
		}
		check2 = check_condition_2(tree, i);
	}
	if (height == 1)
	{
		if (tree->left == NULL && tree->right != NULL)
			return (0);
		return (1);
	}
	if (check2 == 0)
		return (0);

	return (1);
}
