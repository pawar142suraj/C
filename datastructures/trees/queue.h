#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node *lchild;
	int data;
	struct Node *rchild;
}Node;

typedef struct Queue{
	int front;
	int rear;
	int size;
	Node **Q;
}Queue;

void create(Queue *q,int size)
{
	q->size = size;
	q->front = q->rear =  0;
	q->Q = (Node **)malloc(q->size * sizeof(Node *));

}
void enqueue(Queue *q,Node *x)
{
	if((q->rear+1)%(q->size) == q->front)
		printf("Queue is Full for %d\n",x->data);
	else{
		q->rear = (q->rear+1)%(q->size);
		q->Q[q->rear] = x;
	}


}

Node *dequeue(Queue *q)
{
	Node *x = NULL;
	if(q->rear == q->front)
		printf("Queue is Empty\n");
	else{
		q->front = (q->front+1)%(q->size);
		x = q->Q[q->front];
	}
	return x;
}

int isempty(Queue *q)
{
	return (q->front != q->rear);
}


