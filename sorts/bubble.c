#include<stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y= temp;
}
void bubblesort(int *a,int n)
{
	int i,j,flag=0;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				flag=1;
			}
			
		}
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	


}
int main()
{

	int a[]={1,2,3,5,6,4};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	bubblesort(a,n);

	return 0;
}
