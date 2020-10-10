#include"header.h"
int RMax(node *p)
{
int x=0;
if(p==0)
	return -1;
x=RMax(p->next);
if(x>p->data)
	return x;
else
	return p->data;
}	
