#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

//создание списка
List *create_list()
{
	List *list = (List*)malloc(sizeof(List));
	list->head = NULL;
	list->tail = NULL;
	return list;
}

//чтение файла и заполнение списка
void fill_list(FILE *stream, List *list)
{
	while (1)
	{
		char *str = (char*)calloc(128, sizeof(char));
		if (fgets(str, 128, stream) == NULL)
		{
			if (feof(stream) != 0)
			{
				free(str);
				break;
			}
			else
			{
				printf("Error of reading\n");
				free(str);
				break;
			}
		}

		fill_node(list, str);
		free(str);
	}
	fclose(stream);
}

//заполнение узла
void fill_node(List *list, char *str)
{
	if (!list)
	{
		printf("Can't fill node: list doesn't exist\n");
		return;
	}

	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->text = (char*)calloc(128, sizeof(char));
	memcpy(new_node->text, str, strlen(str));
	new_node->next = NULL;
	new_node->prev = NULL;

	if (list->head == NULL)
	{
		list->head = new_node;
		list->tail = new_node;
		new_node->index = 1;
	}
	else
	{
		list->tail->next = new_node;
		new_node->prev = list->tail;
		list->tail = new_node;
		new_node->index = new_node->prev->index + 1;
	}
}

//печать списка
void print_list(List *list)
{
	if (!list)
	{
		printf("Can't print list: list doesn't exist\n");
		return;
	}

	Node *tmp = list->head;
	while(tmp)
	{
		printf("line %d: %s", tmp->index, tmp->text);
		tmp = tmp->next;
	}
}

//освобождение выделенной под список памяти
void delete_list(List *list)
{
	Node *tmp = list->head;
	while(tmp)
	{
		Node *tmp_next = tmp->next;
		free(tmp->text);
		free(tmp);
		tmp = tmp_next;
	}
	free(list);
}

