#include<stdio.h>
int main()
{
	int i,arr[10]={1,2,3,4,5,6,7,8,9,10};

	int *p=arr+9;

	for(i=0;i<10;i++)
		printf("%d ",*p--);

	return 0;
}
