#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - test of the binary trees logic
 * Return: Always 0 (success)
 */
int main(void)
{
	binary_tree_t *root;

	irqInit();
	irqEnable(IRQ_VBLANK);
	consoleDemoInit();

	root = binary_tree_node(NULL, 100);
	binary_tree_insert(root, 200);
	binary_tree_insert(root, 45);
	binary_tree_insert(root->left, 76);
	binary_tree_insert(root->right, 98);
	binary_tree_insert(root->left, 234);
	binary_tree_insert(root->right, 201);
	binary_tree_print(root);
	printf("\n");
	binary_tree_inorder(root, &print_num);
	while (1) {
		VBlankIntrWait();
	}
	return (0);
}
