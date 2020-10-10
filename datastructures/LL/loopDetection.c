#include"header.h"
void loopDetection(node **href)
{
	int flag=0,length=0;
	node *slowptr=*href,*fastptr=*href;
	while((fastptr != NULL) && (fastptr->next != NULL))
	{
		slowptr=slowptr->next;
		fastptr=fastptr->next->next;
		length++;
		if(slowptr==fastptr)
		{	flag=1;
			break;
		}
	}
	printf("Loop Length is %d\n",length);

	if(flag==1)
		printf("Loop Detected \n");
	else
		printf("No Loop Detected \n");
}

