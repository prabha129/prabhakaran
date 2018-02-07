#include <stdio.h>
int main(void) {
int a,b,mul;
mul=1;
scanf("%d",&a);
scanf("%d",&b);
for(int i=0;i<b;i++)
{
	mul=mul*a;
}
printf("%d",mul);
	return 0;
}
