#include <stdio.h>
int main()
{
	int num,k,i,a[10];
	scanf("%d%d",&num,&k);
	for(i=0;i<num;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("%d",a[k-1]);
	return 0;
}
