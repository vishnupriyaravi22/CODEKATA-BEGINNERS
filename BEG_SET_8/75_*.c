#include <stdio.h>
#include<string.h>
int main()
{
      int i,mid;
    char a[100];
    scanf("%s",a);
    int len=strlen(a);
    if(len%2!=0)
      {
          mid=len/2;
          a[mid]='*';
          printf("%s",a);
      }
      else
      {
          mid=len/2;
          a[mid]='*';
          a[mid-1]='*';
          printf("%s",a);
      }
	return 0;
}
