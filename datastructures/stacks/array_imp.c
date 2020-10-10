#include<stdio.h>
static int top=-1;
void push(int *arr,int data)
{

	if(top < 100 )
	{

		top+=1;
		arr[top]=data;
	}

}
int pop(int *arr)
{
	if(top !=-1)
	{	
		top-=1;
		return arr[top+1];	
	}
	else
		printf("Stack is Empty\n");

}
void display(int *a)
{
	int n=top;
	do
	{
		printf("%d ",a[n]);
		n--;

	}while(n>=0);
		printf("\n");


}
int main()
{
	int arr[100];

	printf("Pushing elements onto stack\n");
	push(arr,10);
	push(arr,20);
	push(arr,30);
	push(arr,40);
	push(arr,50);

	display(arr);
	printf("top : %d\n",top);
	printf("Popped elements are:\n");
	printf("%d\n",pop(arr));
	printf("%d\n",pop(arr));
	printf("%d\n",pop(arr));
	printf("%d\n",pop(arr));
	
	printf("After Popping:\n");

	display(arr);
}



