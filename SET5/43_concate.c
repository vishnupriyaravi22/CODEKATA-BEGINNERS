
#include <stdio.h>
#include<string.h>
int main()
{
   int n,i,j,k,flag=0;
   char str1[100],str2[100];
   scanf("%s",str1);
   scanf("%s",str2);
   
   for(i=0;str1[i]!='\0';i++)
   {
       continue;
   }
   if(i==strlen(str1))
   {
       for(j=i,k=0;str2[k]!='\0';j++,k++)
       {
           str1[j]=str2[k];
          
       }
   
   }
    printf("%s",str1);
  return 0;
}

    
  
  
