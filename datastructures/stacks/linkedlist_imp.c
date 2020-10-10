#include"header.h"

void push(node **t,char data)
{

	node *temp=(node *)malloc(sizeof(node));
if(temp)
{
	
	temp->data=data;
	temp->next=*t;
	*t=temp;
}
else
	printf("stack is full\n");
}

char pop(node **t)
{
	node *p=*t;
if(p)
{	
	node *p=*t;
	int data=p->data;
	*t=p->next;
	free(p);
	return data;
}
else
	printf("stack is empty. Below element printed are garbage value\n");
}

void display(node *t)
{
if(t)
{
	while(t)
	{
		printf("%c ",t->data);
		t=t->next;
	}
	printf("\n");
}
else
	printf("No Elements\n");
}

int main()
{
	node *top=NULL;
	
	push(&top,'r');
	push(&top,'a');
	push(&top,'w');
	push(&top,'a');
	push(&top,'p');

	display(top);

/*	printf("Popped elements are:\n");
	printf("%d\n",pop(&top));
	printf("%d\n",pop(&top));
	printf("%d\n",pop(&top));
	printf("%d\n",pop(&top));
	printf("%d\n",pop(&top));
	printf("%d\n",pop(&top));
		
	printf("Elements in stack after popping are:\n");

	display(top);
*/

	stringreversal(&top);
	return 0;
}
