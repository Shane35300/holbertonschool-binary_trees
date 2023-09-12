#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size (number of nodes) of a binary tree.
 *
 * This function calculates the number of nodes in a binary tree rooted at
 * the given node, including the root node itself.
 *
 * @tree: Pointer to the root node of the binary tree to measure.
 *
 * Return: The size of the binary tree. If the tree is NULL, the size is 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
     size_t left_substree;
    size_t right_substree;
    size_t sizetree = 0;

    if (tree == NULL)
        return (0);

    left_substree = binary_tree_size(tree->left);
    right_substree = binary_tree_size(tree->right);

         sizetree = left_substree +right_substree +1;

    return (sizetree);

}