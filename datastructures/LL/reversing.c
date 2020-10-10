#include"header.h"


void reversing(node **href)
{
#if 0

	node *p,*q;

	//	printf("hello");
		p=(*href)->next;
		q=*href;
		(*href)->next=NULL;
		//r=NULL;
	while(p)
	{	
	
		*href=p;

		p=(*href)->next;
		
		(*href)->next=q;
		q=*href;
	}
#endif
#if 1
	node *curr=NULL,*n=NULL,*prev=NULL;
	curr=*href;
	while(curr)
	{
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
		

	}
	*href=prev;
#endif


}
/*
void recursivereversing(node **href,node **p)
{
	node *curr=NULL,*n=NULL,*prev=*p;
	curr=*href;
	if(*href)
	{
		*href=curr->next;
		(curr)->next=prev;
		prev=curr;
		recursivereversing(href,&prev);
			
		
	}

	

}*/

node *recursivereversing(node *ptr)
{
	node *n;
	if(ptr->next!=NULL)
	{
			
		n= recursivereversing(ptr->next);
		ptr->next->next=ptr;
		ptr->next=NULL;
		return n;
	}
	else
	{
		return ptr;
	}
		

	
}


