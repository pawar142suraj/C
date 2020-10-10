#include"header.h"
void * intersecting(node **h1,node **h2)
{
	
	
	node *p=*h1,*q=*h2;

	while(p)
	{
		while(q)
		{
			if(p==q)
				return p;
			q=q->next;
		}
		p=p->next;
	
		return NULL;
}

