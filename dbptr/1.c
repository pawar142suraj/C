#include<stdio.h>
#include<stdlib.h>

#if 0
void foo(int *ptr)//new varialble ptr is created with new address
{
	int a=5;
	ptr =&a;//so when ptr is changing the address it doesnt change the actual parameter's value..i.e, actual ptr's adddress in unchanged.Hence we use double ptr

}
int main()
{
	int *ptr =NULL;
	ptr = (int *)malloc(sizeof(int));
	*ptr=10;
	foo(ptr);//passing the copy of ptr
	printf("%d\n",*ptr);//gives 10 
}
#endif

		//Double Pointer.Thus we use db in linked list aswell.
#if 1

void foo(int **ptrref)//double ptr
{
	int a=5;
	*ptrref =&a;//now the address of ptr from main is changed 

}
int main()
{
	int *ptr =NULL;
	ptr = (int *)malloc(sizeof(int));
	*ptr=10;
	foo(&ptr);//address of ptr is passed
	printf("%d\n",*ptr);//gives 5
}

#endif
