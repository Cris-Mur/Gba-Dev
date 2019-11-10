#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include "lists.h"

int main(void){
    irqInit();
	irqEnable(IRQ_VBLANK);
	consoleDemoInit();

    list_t *head;

    head = NULL;
    add_node_end(&head, "Jennie");
    add_node_end(&head, "&");
    add_node_end(&head, "Jay");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;

    listint_t *head2;
    int sum;
    sum = 0;
    head2 = NULL;
    add_nodeint_end(&head2, 0);
    add_nodeint_end(&head2, 1);
    add_nodeint_end(&head2, 2);
    add_nodeint_end(&head2, 3);
    add_nodeint_end(&head2, 4);
    add_nodeint_end(&head2, 98);
    add_nodeint_end(&head2, 402);
    add_nodeint_end(&head2, 1024);
    print_listint(head2);
    sum = sum_listint(head2);
    printf("sum = %d\n", sum);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 5);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&head2, 0);
    print_listint(head2);

	while (true);
}
