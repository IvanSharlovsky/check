#include <stdio.h>
#pragma once

typedef struct Node 
{
        int index;
        char *text;
        struct Node *next;
        struct Node *prev;
} Node;

typedef struct List
{
	struct Node *head;
	struct Node *tail;
} List;

List *create_list();

void fill_list(FILE *stream, List *list);

void fill_node(List *list, char *str);

void print_list(List *list);

void delete_list(List *list);

