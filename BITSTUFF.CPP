#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50];
int n,c,i;
clrscr();
printf("enter the string:");
gets(s);
c=strlen(s);
n=0;
while(n!='0')
{
printf("%c",s[n]);
n++;
continue;
}
elseif(s[n]=='1'&&s[n+1]=='1'&&s[n+2]=='1'&&s[n+3]=='1'&&s[n+4]=='1')
{
for(i=0;i<5;i++)
printf("%c",s[n+i]);
printf("0");
n=n+5;
continue;
}else
{printf("%c",s[i]);
n++;
}
}
getch();
}