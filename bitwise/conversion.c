#include<stdio.h>
#include<math.h>
int bintodec(long long x)
{
	int i,dec;
	int rem=0;
	dec=0;
	for(i=0;x!=0;i++)
	{
		rem=x%10;
		dec+=pow(2,i)*rem;
		x=x/10;
	}
return dec;	
}
long long dectobin(int x)
{
	int i,bin;
	int rem=0;
	bin=0;
	for(i=0;x!=0;i++)
	{
		rem=x%2;
		bin+=rem*pow(10,i);
		x=x/2;
	}
	return bin;
}
int main()
{
	printf("after conversion of 101 bin to dec :%d\n",bintodec(101));
	printf("after conversion of 5 dec to bin :%lld\n",dectobin(5));
	return 0;

}
