#include<stdio.h>
int main()
{
	char *p="Hello";
	char q[]="Bello";
	printf("%ld\n",sizeof(q));
	printf("%ld\n",sizeof(*p));
//	p[2]='c';
	printf("%s\n",p);
	printf("%s\n",q);

}

