/*
 * flex arr mem can be declared only at the last mem of struct
*each struct can contain atmost one flexible array member
*a flex arrau cannot be only mem of struct
*any struct containing a flex arrau mem cannot be mem of another struct
*a struct with a flexible array member cannot be statically initialized
	*it must be allocated dynamically
	*you cannot fix the size of flexible array mem at compile time*/

#include<stdio.h>
#include<stdlib.h>

struct s{
	int arraysize;
	int array[];//in structs we can use array without declaring size
};

int main(){
	int desired_arrlen=5;
	struct s *ptr;

	ptr=malloc(sizeof(struct s)+desired_arrlen*sizeof(int));//sizeof operator ignores flexible array..so we add desired size
	
	printf("size of struct: %ld\n",(sizeof(struct s)+desired_arrlen*sizeof(int)));

	return 0;
}
