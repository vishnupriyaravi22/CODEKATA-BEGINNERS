#include<stdio.h>
int main()
{
	int num;
	int i,a,b,c;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		a=pow(2,i);
		if(a>num)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
