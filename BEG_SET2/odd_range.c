#include<stdio.h>

int main()
{

int n1,n2;
scanf("%d %d",&n1,&n2);

for(int i=n1+1;i<n2;i++)
{
if((i%2)!=0)
{
printf(" %d",i);
}
}
return 0;
}
