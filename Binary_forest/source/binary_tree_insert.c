#include "binary_trees.h"

/**
 * binary_tree_insert - sorted insert into a binary tree
 * @tree: input tree
 * @value: input value of new node
 * Return: dir of the new node
 */
binary_tree_t *binary_tree_insert(binary_tree_t *tree, int value)
{
	if (value > tree->n)
		return (binary_tree_insert_right(tree, value));

	return (binary_tree_insert_left(tree, value));
}
