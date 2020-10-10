

int main()
{
	//int a[5] = 5,1,;

	
	int i =2;
	static char ch = 'A';
	float j;

	int k;
	k = ++ch && i;
	k = ++ch;
	j = i-- + ++k *2;
	printf("%d\n",k);
	printf("%f\n",j);
}
