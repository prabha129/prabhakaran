#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int b1,b2,i,j;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	b1=strlen(str1);
	b2=strlen(str2);
	j=0;
	while(b1<(b1+b2))
	{
		str1[b1]=str2[j];
		j++;
		b1++;
	}
	printf("%s",str1);
	return 0;
}
