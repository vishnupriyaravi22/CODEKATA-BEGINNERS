#include <stdio.h>
int main() 
{	
   int n,a[10],i,f=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
        if(a[i]<a[i+1])
        {
            f=0;
        }
        else
        {
            printf("%d",i+1);
        }
   }
	return 0;
}
