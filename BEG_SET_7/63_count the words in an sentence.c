#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int count=0;
scanf("%[^\n]s",s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;
}
printf("%d",count+1);
return 0;
}
