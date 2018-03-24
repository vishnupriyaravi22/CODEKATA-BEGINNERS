#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,i,j,count=0,t;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
        
    }
    printf("%s",s);
            
        
            
    return 0;
}
