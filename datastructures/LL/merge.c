#include"header.h"

void merge(node **h1, node **h2 )
{

	node *p=*h1;
	
	while(p->next)
		p=p->next;

	p->next=*h2;
}
