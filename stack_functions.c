#include "monty.h"
/**
  *
  *
  */
void push(int x)
{
	stack_t *newNode, *holder;

	holder = top;
	newNode == malloc(sizeof(stack_t));
	newNode->n = x;
	if (newNode == NULL)
		 perror("NULL");
	if (holder == NULL)
	{
		newNode->next = NULL;
		newNode ->prev = NULL;
		top = newNode;
	//	return (top);
	}
	else
	{
		holder->prev = newNode;
		newNode->next = holder;
		newNode->prev = NULL;
		top = newNode;
	//	return (top);
	}
}
