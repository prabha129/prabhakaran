#include<stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
for(i=2;a>10;i++)
{
a=a/10;
}
printf("%d",i);
return 0;
}
