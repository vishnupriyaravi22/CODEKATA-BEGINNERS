#include <stdio.h>
#include<string.h>
int main() 
{	
   char a[10],b[10];
   int i,len;
   scanf("%s",a);
   len=strlen(a);
   for(i=0;i<len;i=i+2)
   {
       b[i]=a[i];
       printf("%c",b[i]);
   }
   printf(" ");
   for(i=1;i<len;i=i+2)
   {
       b[i]=a[i];
       printf("%c",b[i]);
   }
 return 0;
}
