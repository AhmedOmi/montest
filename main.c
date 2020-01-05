#include "monty.h"
/**
  *
  *
  */
int main(int ac, char *argv[])
{
	FILE *fp;
	int i;
	stack_t *top = NULL;
	if (ac == 2)
	{
		fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			fprintf(stderr ,"Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		//still doing the getline or fgets part
		for (i = 1; !feof; i++)
		{
		}
		fclose(fp);
	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
