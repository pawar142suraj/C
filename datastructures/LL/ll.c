#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
	int data;
	struct Node * next;
}Node;

void create(Node **headref,int data)
{
	Node *newnode=(void *)malloc(sizeof(Node));
	(newnode)->data=data;
	*headref=newnode;	

}
void display(Node *head)
{
	while(head)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}
int main()
{
	Node *head=NULL;
	create(&head,5);
	display(head);
	free(head);       	

}
