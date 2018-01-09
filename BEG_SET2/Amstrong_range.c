#include<stdio.h>
int main()
{
    int n1,n2,rem,sum,temp,i;
    scanf("%d %d",&n1,&n2);
    
     for(i=n1; i<=n2; i++)
     {
      temp =i;  
      sum = 0;
  while(temp!=0)
    {
        rem = temp % 10;
        temp = temp/10;
        sum = sum+(rem*rem*rem);
       
    }
     
     
   
    if( sum == i)
    {
        printf(" %d",i);
    }
     }
    
}
