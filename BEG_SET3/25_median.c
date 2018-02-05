
#include <stdio.h>
 
int main() 
{
    int n,a[100000],i,j,temp,median;
 
   
    printf("enter the number of element:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
   
 
  for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    } 
    if(n%2==0)
    {
        median=((a[n/2]+a[n/2 - 1])/2.0);
    }
    else
    {
        median = a[n/2];
    }
  for(i=0;i<n;i++)
  {
    printf(" %d",a[i]);
    
  }
printf("\n%d", median);
    return 0;
}



