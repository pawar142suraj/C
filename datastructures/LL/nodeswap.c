#include"header.h"

void nodeswap(node **href,int data1,int data2)
{

	node *p=*href,*q=*href,*temp=p,*temp2=NULL,*temp3=NULL,*temp4=NULL;
	while(p->next->data != data1)
	{
		p=p->next;
	}
	
	while(q->next->data != data2)
	{
		q=q->next;
	}
	
	temp=p->next;
	temp3 = q->next->next;
	temp4=q->next;
	
	//This logic doesnt work for nodes which are beside each other.We have to add comndition for head aswell
	
	p->next=temp4;
	q->next=temp;
	temp4->next=temp->next;
	temp->next= temp3;
	printf("Nodes Swapped successfully\n");

}
//Now we will write pair wise nodeswap

void pairnodeswap(node **href)
{
	node *p=*href,*q=p->next,*temp1=NULL,*temp2=NULL;
	
	do{

		if(p==*href)
			{
				p->next=q->next;
				q->next=*href;
				*href=q;
				temp1=p;
				q=p->next->next;
				p=p->next;
	//			temp2=q->next;
			}
		else
			{
				temp2=q->next;
				temp1->next=q;
				q->next=p;
				p->next=temp2;

				temp1=p;
				p=temp2;
				q=temp2->next;
		//		temp2=q->next;
			}
	}while(temp2);
		

}

