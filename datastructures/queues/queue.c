#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{

	int size;
	int front;
	int rear;
	int *Q;
}Queue;


void create(Queue *q,int size)
{
	q->size = size;
	q->front = q->rear = 0;
	q = (Queue *)malloc(q->size * (sizeof(int))); 


}
void enqueue(Queue *q,int data)
{
	if((q->rear+1)%(q->size) == q->front)
		printf("Queue is full");
	else{
		q->rear = (q->rear+1)%q->size ;
		q->Q[q->rear]=data;
	}
}
void dequeue(Queue *q)
{
	int x=-1;
	if(q->front == q->rear)
		printf("Queue is empty");
	else{
		q->front = (q->front+1)%q->size ;
		x= q->Q[q->front];
	    }

}
void display(Queue *q)
{
	int x=q->front;
	while(q->rear != x)
	{
		x=(x+1)%(q->size);
		printf("%d ",q->Q[x]);
	}


}
void main()
{

	Queue q;

	create(&q,4);
	
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);


	display(&q);

	printf("after dequeue\n");

	dequeue(&q);

	display(&q);
}
