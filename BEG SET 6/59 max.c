#include<stdio.h>
int main()
{
int num,max=0,i,a[10];
  scanf("%d",&num);
max=a[0];

for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}
