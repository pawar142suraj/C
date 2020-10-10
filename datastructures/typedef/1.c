#include<stdio.h>
#include<stdlib.h>
typedef int (*First)(int);
typedef int Second(int);

int def( int a)
{
	printf("Typedef is a success if you are seeing this %d\n",a);
}

First abc(int a)
{
	printf("Typedef is a success if you are seeing this %d\n",a);
}
int main()
{
	Second *suraj;

	suraj = def;
	suraj(10);
	abc(11);
	//suraj(10);
	//First(10);
	return 0;
}
