#include "binary_trees.h"
/**
 * binary_trees_ancestor - name of the function
 * Description: find the first common ancestor
 * @first: node1
 * @second: node2
 * Return: return the ancestor founded
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *ptr1 = (binary_tree_t *)first;
	binary_tree_t *ptr2 = (binary_tree_t *)second;

	while (ptr1 != NULL)
	{
		while (ptr2 != NULL)
		{
			if (ptr1 == ptr2)
			{
				return (ptr1);
			}
			ptr2 = ptr2->parent;
		}
		ptr1 = ptr1->parent;
		ptr2 = (binary_tree_t *)second;
	}
	return (NULL);
}
