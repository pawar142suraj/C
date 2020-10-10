#include<stdio.h>
int i=9;
int incr();//by default a fn is extern but not static so extern can be added or not its upto u
int main()
{
//	extern int incr();
	printf("incrementing i using extern:%d\n",incr());
	printf("incrementing i using extern:%d\n",incr());

}
