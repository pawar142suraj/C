
/*Fast pointer slow pointers are used to inprove the sopeed of searching. It reduces the searches by n/2 */

#include"header.h"
void searching(node **href)
{
	int midelement;
	node *fastptr=*href;
	node *slowptr=*href;

	while((fastptr!=NULL)&&((fastptr->next)!=NULL))
	{
		slowptr=slowptr->next;
		fastptr=fastptr->next->next;
	}
	midelement=slowptr->data;
	printf("Middle Element:%d\n",midelement);
}
/*calculating whole length*/
void length(node **href)
{
	int length=0,flag=0;
	node *fastptr=*href;
	node *slowptr=*href;

	while((fastptr!=NULL)&&((fastptr->next)!=NULL))
	{
		slowptr=slowptr->next;
		fastptr=fastptr->next->next;
		if(flag==1)
			length++;
		if(flag==2)
			break;
		if(fastptr==slowptr)
		{	
			flag+=1;
			continue;
		}
	}
	printf("Length of linked list is::%d\n",length);

}

