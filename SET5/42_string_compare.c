
#include <stdio.h>

int main()
{
   int n,j,flag=0;
   char str1[100],str2[100];
   scanf("%s",str1);
   scanf("%s",str2);
  if(strlen(str1)>strlen(str2))
  printf("%s",str1);
  else if(strlen(str1)<strlen(str2))
  printf("%s",str2);
  else
 printf("%s",str1);
}
    
