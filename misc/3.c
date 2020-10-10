#include <stdio.h>

int fun()
{
	static int num = 16;
	num--;
}

int main()
{
	for(fun();fun();fun())
		printf("%d\n",fun())
			;

	return 0;
}
