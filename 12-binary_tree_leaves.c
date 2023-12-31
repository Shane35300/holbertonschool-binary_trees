#include "binary_trees.h"
/**
 * binary_tree_leaves - name of the function
 * Description: count the leaves
 * @tree: tree
 * Return: return the number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves_left = 0;
size_t leaves_right = 0;
size_t leaves;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

leaves_left = binary_tree_leaves(tree->left);
leaves_right = binary_tree_leaves(tree->right);

leaves = leaves_left + leaves_right;

return (leaves);

}
