#ifndef STACK
#define STACK
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	char data;
	struct Node *next;
}node;
extern void stringreversal(node **t);
extern char pop(node **t);

#endif
