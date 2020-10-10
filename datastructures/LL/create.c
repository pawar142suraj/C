#include"header.h"
int l;
void create(node **href,int data)
{
	node *newnode=(node *)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=*href;
	*href=newnode;
	l++;
}

void createloop(node **href)
{
	node *p=*href;
	while(p->next != NULL)
		p=p->next;
	p->next=*href;


}
void display(node *p)
{
	while(p)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	if(!p)
		printf("NULL\n");
}
int main()
{
	node *head=NULL;
	create(&head,10);
	create(&head,20);
	create(&head,30);
	create(&head,40);
	create(&head,50);
	create(&head,60);
	create(&head,70);
	create(&head,80);
	display(head);
	reversing(&head);
	display(head);
	head=recursivereversing(head);
	display(head);
	searching(&head);
	loopDetection(&head);
//	createloop(&head);
//	loopDetection(&head);
//	length(&head);
//	nodeswap(&head,70,40);
	pairnodeswap(&head);
	display(head);	
	printf("Max Element is : %d\n",RMax(head));	
	printf("After Sorting:");	
	sorted(&head);
	display(head);	
	
/* Creating another Linked list for merging*/
	node *head2=NULL;
	create(&head2,11);
	create(&head2,22);
	create(&head2,33);
	create(&head2,44);


	printf("Second Linked list to merge: ");	
	display(head2);

	printf("After Merge: ");
	merge(&head,&head2);
	display(head);	


	return 0;
}

