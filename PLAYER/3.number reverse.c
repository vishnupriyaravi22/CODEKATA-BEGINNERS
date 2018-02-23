#include<stdio.h>
void main()
{
int n,rev=0,temp,rem;
scanf("%d",&n);
temp = n;
while(n>0)
{
rem=n%10;
rev= rev*10+rem;
n = n/10;
}
printf("Given number = %d\n", temp);
printf("%d",rev);


}
