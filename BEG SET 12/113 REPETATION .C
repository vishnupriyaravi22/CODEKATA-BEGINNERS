#include <stdio.h>

int main(void)
{
	int n,a[100],k,i,count;

	scanf("%d",&n);

	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			count=count+1;
		}
	}
	if(count>1)
	{
		printf("%d %d",k,count);
	}
	else
	{
		printf("%d",k);
	}
	return 0;
}
