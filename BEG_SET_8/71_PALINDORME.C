#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[100];
scanf("%s",s);
int l=0,h;
h=strlen(s)-1;
while(h>l)
{
if(s[l++]!=s[h--])
{
printf("not");
exit(0);
}
}
printf("yes");
return 0;
}
