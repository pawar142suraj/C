#include<stdio.h>
void sum(int *p)
{

}

void sub(int **p)
{

}
int main()
{
	int a[]={1,2,3,4};
	int b[][2]={{1,2},{2,3}};
	int *arr[10];


	sum(a);
	sum(*b);
	sub(arr);
}

