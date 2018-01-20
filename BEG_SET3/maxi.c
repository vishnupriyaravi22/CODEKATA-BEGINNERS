#include<stdio.h>
int main (void)
{
	int a[3],i,max;
	for (i=0;i<3;i++)
	{

		scanf("%d",&a[i]);
	}
	
		for (i=0;i<3;i++)
		{
		if (a[i] > max)
        {
       max  = a[i];
		}
		}
		    printf("%d ",max);
		    return 0;
}
