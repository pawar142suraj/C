
//selection sort is designed for linkedlist...unlike bubble..in first pass itself you wont get max or min numb
#include<stdio.h>

void insertionsort(int *a,int n)
{
	int i,j,x=0;

	for(i=1;i<n;i++)
	{
		j=i-1;
		x=a[i];
		while(j > -1 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main()
{
	int a[]={1,2,3,4,6,8};
	int n=sizeof(a)/sizeof(a[0]);
	insertionsort(a,n);

	return 0;
}
