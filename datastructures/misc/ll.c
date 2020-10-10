#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	struct Node *next;
	int data;
}node;
void add(node **href,int data)
{
	node *newnode = (node *)malloc(sizeof(node));
	newnode->data = data;
	if(*href == NULL)
		*href=newnode;
	else
	{
		newnode->next = *href;
		*href = newnode;
	}

}
void display(node *head)
{
	while(head)
	{
		printf("%d->",head->data);
		head=head->next;
	}
	if(head==NULL)
		printf("NULL\n");

}
int main()
{
	node *head = NULL;

	add(&head,10);
	add(&head,20);
	add(&head,30);
	
	display(head);
}
