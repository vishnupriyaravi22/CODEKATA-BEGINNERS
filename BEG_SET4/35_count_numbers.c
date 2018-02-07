
#include <stdio.h>

int main()
{
    int numcount=0;
    char str[10000];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
        numcount=numcount+1;
        }
    }
printf("%d",numcount);
   return 0; 
}
