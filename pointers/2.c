#include<stdio.h>

int main()
{
	const int c=5;//we can chasnge its value using ptr coz its not storing in rodata..its storing in stack..compiler knows its constant so while changing directly we cannot change but while using ptr..it doesnt know its constant as its in stack and not in rodata...whereas global consts cannot be changed using ptr coz the ptr directly points to rodata..
	int i,*p;
	int *const q;//but if we give ptr also const then we cannot change its value as its constant pointer
	q=&c;
	int (*ap)[5];
	int a[5]={1,2,3,4,5};
	p=a;
	ap=a;//if we dont give & also 
	for(i=0;i<5;i++)
		printf("%d ",*(p+i));
	printf("-------------------\nNOW USING ARRAY POINTER\n");
	for(i=0;i<5;i++)
		printf("%d ",*(*ap+i));
	printf("\n");
	printf("%d",++*q);
}
