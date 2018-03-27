#include <stdio.h>
int main() 
{	
   int num,a[10],i,flag=0;
   scanf("%d",&n);
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<num;i++)
   {
        if(a[i]<a[i+1])
        {
            flag=0;
        }
        else
        {
            printf("%d",i+1);
        }
   }
	return 0;
}
