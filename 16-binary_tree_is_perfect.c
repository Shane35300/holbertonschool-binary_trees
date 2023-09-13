#include "binary_trees.h"
#include "9-binary_tree_height.c"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	
	
	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree ->right)
			return (1);
		return (binary_tree_is_perfect(tree->left) && 
		binary_tree_is_perfect(tree->right));
	}
	return (0);
}
