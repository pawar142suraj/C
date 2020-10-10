#include<stdio.h>
int main()
{
	int i;
	int a[5]={1,2,3,4,5,6,7,8,9};//no bounds checking..it gives us warning
	int b[5]={23,22};
	for(i=0;i<9;i++)
		printf("%d\n",a[i]);//after 5th elements it prints garbage value
	printf("-------------------\n");
	for(i=0;i<5;i++)
		printf("%d\n",b[i]);//other values are initialized to zero
	
	return 0;
	
}
