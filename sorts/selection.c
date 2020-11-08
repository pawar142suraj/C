#include<stdio.h>//n-1 swaps..unlike other prev two but not adaptive nor stable....but k passes gives k small elements in the beginning
void swap(int *x,int *y)
{

	int temp=*x;
	*x=*y;
	*y=temp;
}
void selectionsort(int *a,int n)
{
	int i,j,k;

	for(i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(a[j]<a[k])
				k=j;
		}
		swap(&a[i],&a[k]);
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main()
{
	int a[]={10,20,3,4,6,8,5,2};
	int n=sizeof(a)/sizeof(a[0]);

	selectionsort(a,n);

	return 0;
}
