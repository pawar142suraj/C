#include<stdio.h>

#define peach int

unsigned peach i;

typedef int banana;

unsigned banana i;//its illegal coz i is already using peach..its declared already.It throws an error

#define int_pointer int *

int_pointer chalk,cheese;//here cheese is int cheese..and chalk is int *chalk coz define is just substituting.do cc -E and look at code

typedef char * char_ptr;

char_ptr Bently, Rolls_Royce;//but here both Bently and Rollce Royce are char *

peach main()
{
	return 0;
}
