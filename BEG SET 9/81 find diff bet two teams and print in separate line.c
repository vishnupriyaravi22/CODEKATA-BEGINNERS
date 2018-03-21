#include <stdio.h>

int main(void) 
{
	int n,m,i;

	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&n,&m);
	if(n>m)
	{
		printf("\n%d",n-m);
	}
	else
	{
		printf("\n%d",m-n);
	}
	}
	return 0;
}
