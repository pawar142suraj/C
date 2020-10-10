#include<stdio.h>
void call2(void);

void call(void)
{
# define A 20
	printf("call :%d\n",A);
}
int main()
{
 
	# define A 10
	printf("%d",A);
	call();
	call2();
	#undef A
	call();
	printf("A\n");
}
void call2(void)
{
	printf("%d\n",A);
}
