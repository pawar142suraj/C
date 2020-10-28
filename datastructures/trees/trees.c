
#include"queue.h"

Node *root=NULL;

void treecreate()
{
	Node *p,*t;
	Queue q;
	int x;
	create(&q,100);

	printf("Enter value of root ");
	scanf("%d",&x);
	root = (Node *)malloc(sizeof(Node));
	 root->data=x;
	 root->lchild=root->rchild=NULL;

	 enqueue(&q,root);

	 while(isempty(&q))
	 {
		 p=dequeue(&q);
		 printf("Enter left child ");
		 scanf("%d",&x);

		if(x!= -1){
		 	t=(Node *)malloc(sizeof(Node));
			t->data = x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
		 }
		 printf("Enter right child ");
		 scanf("%d",&x);

		if(x!= -1){
		 	t=(Node *)malloc(sizeof(Node));
			t->data = x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
		 }
	 }
			
}

void preorder(Node *p)
{
	if(p)
	{
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}

}
int main()
{
	treecreate();
	preorder(root);
	

	return 0;
}




	
