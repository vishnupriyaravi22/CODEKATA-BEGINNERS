#include<stdio.h>
int main()
{
int n,m,diff=0;
scanf("%d %d",&n,&m);
diff = n+m;
if(diff%2!=0)
{
printf("odd");
}
else
{
printf("even");
}
return 0;
}
