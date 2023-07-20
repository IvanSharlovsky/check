#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
 
int main(const int argc, const char *argv[])
{
	FILE *fp; //указатель файла
	if (argc != 2)
	{
		printf("Usage: %s file_name\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	List *list = create_list();

	fill_list(fp, list);

	print_list(list);

	delete_list(list);

	return 0;
}

