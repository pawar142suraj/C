#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
void foo(char *ptr)
{
	ptr=malloc(150);
	strcpy(ptr,"Hey Beautiful.Its okay to be ugly");
}
int main()
{
	char *ptr=NULL;

	foo(ptr);
	printf("%s\n",ptr);

	free(ptr);
}
#endif

#if 1

void foo(char **ptr)
{
	*ptr=malloc(150);
	strcpy(*ptr,"Hey Beautiful.Its okay to be ugly");
}
int main()
{
	char *ptr=NULL;

	foo(&ptr);
	printf("%s\n",ptr);
	
	free(ptr);

}
#endif
