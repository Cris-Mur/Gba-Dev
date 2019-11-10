#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *temp = h;

	size = 0;
	while (temp != NULL)
	{
        if (temp->len > 0)
        {
		    printf("\t\t\t\t[%u] %s\n", temp->len, temp->str);
        }
        else
        {
            printf("\n");       
        }
        
		temp = temp->next;
		size++;
	}
	return (size);
}

list_t *add_node_end(list_t **head, const char *str){
	list_t *new;
	size_t n;
	list_t *temp;

	temp = *head;

	for (n = 0; str[n]; n++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL) {
		*head = new;
	}
	else {
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	new->len = n;
	return (*head);
}

int main(void){
    irqInit();
	irqEnable(IRQ_VBLANK);
	consoleDemoInit();

    list_t *head;

    head = NULL;
    add_node_end(&head, "This");
    add_node_end(&head, "is");
    add_node_end(&head, "a");
    add_node_end(&head, "Linked");
    add_node_end(&head, "List");
    add_node_end(&head, "in");
    add_node_end(&head, "GBA");
    add_node_end(&head, "using c lenguage");
    printf("\n\n\n\n");
    print_list(head);
	while (1);
}