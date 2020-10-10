#include<stdio.h>

int main()
{
	int i,n,j;
	printf("enter number of lines:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
			printf("* ");
		
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("* ");
		
		printf("\n");
	}
	
		printf("\n");
		printf("\n");
		printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(j=1;j<=n+1-i;j++)
			printf("* ");
		
		printf("\n");
	}

	return 0;

}
