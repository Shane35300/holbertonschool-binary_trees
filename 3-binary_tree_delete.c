#include "binary_trees.h"
/**
 * binary_tree_delete - name of the function
 * Description: free recursively the tree
 * @tree: the root
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
