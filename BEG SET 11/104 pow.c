#include<stdio.h>


int main()
{
	int n,k,pow=1,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<k;i++)
	{
	   pow=pow*n;
	}
	printf("%d",pow);
	return(0);	
}
