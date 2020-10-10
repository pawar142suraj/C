#include<stdio.h>
#include<pthread.h>
int i,max;
void *thread_even(void* p)
{
	while(max){
	
		if(max%2 ==0)
		{
			printf("Even: %d\n",max);
			max--;	
		}
	}

return NULL;
}
void * thread_odd(void* p)
{
	while(max){	
		if(max%2 !=0){
			printf("Odd: %d\n",i);
			max--;
		}
	}
		
return NULL;
}
int main()
{
	int status,max;
	pthread_t tid;
	
	printf("Enter a max number :");
	scanf("%d",&max);
	i=max;



		status = pthread_create(&tid,NULL,thread_even,NULL);
		status = pthread_create(&tid,NULL,thread_odd,NULL);

	if(status != 0)
		printf("Thread creation failed\n");

	
		printf("In n main waiting for threads to complete fn\n");
	pthread_exit(NULL);

	return 0;
}
