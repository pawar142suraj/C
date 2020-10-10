#include"header.h"
void palindrome(node **href)
{

	node *q=*href,*p=*href;
	while(q->next)
		q=q->next;
	while((p != NULL) && (q != *href))
	{
		if(p->data != q->data)
		{
			flag=1;
			break;
		}
		else
		{
			p=p->next;
			q=
}
