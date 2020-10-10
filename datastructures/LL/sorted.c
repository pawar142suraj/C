#include"header.h"
void sorted(node **href)
{
	node *p=*href;
	int temp,len;
	
	
	while(p->next)
	{
		if(p->data < p->next->data)
		{
			temp=p->data;
			p->data=p->next->data;
			p->next->data=temp;
		}
		p=p->next;
						
	
	}
}


