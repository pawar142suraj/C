#include<stdio.h>

int main( void )
{


	char p,q='10' ;
	char buf[10] = {'1','2','3','4','5','6','9','8'};
	p = (buf +1)[5];
	
	printf("%d\n",q);
	printf("%d\n",sizeof(2.5));
	printf("%d\n",sizeof(buf)/sizeof(buf[0]));
	printf("p is %d\n",p);
//	while(printf("%d",5)<4)
//		printf("loop");
	
	int i ;
	int arr[5] = {1};
	for( i = 0; i < 5; i++ )
		printf("%d\t",arr[i]);


}
