#include<stdio.h>
int main()
{
 int n;
 
  unsigned long long fact = 1;
   scanf("%d",&n);
  for(int i = 1;i<=n; i++)
  {
      fact = fact * i;
  }
  printf(" %llu",fact);
  return 0;
}
