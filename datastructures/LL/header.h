#ifndef LL
#define LL 
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *next;
}node;
extern int l;
extern void reversing(node **href);
extern node *recursivereversing(node *href);
extern void searching(node **href);
extern void loopDetection(node **href);
extern void length(node **href);
extern void nodeswap(node **href,int data1,int data2);
extern void pairnodeswap(node **href);
extern int RMax(node *p);
extern void sorted(node **href);
extern int len(node *p);
extern void merge(node **h1,node **h2);
#endif
