#include <stdio.h>

int main() 
{
	int n,k,i,a[10],c;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        printf("yes");
	        c=1;
	    }
	}
	if(c!=1)
	{
	    printf("no");
	}
	return 0;
}
