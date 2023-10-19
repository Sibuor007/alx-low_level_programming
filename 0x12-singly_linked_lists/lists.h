#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct lists_z
{
	char *str;
	unsigned int length;
	struct lists_z *next;
}lists_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
