#include<stdio.h>
#include<string.h>
int main()
{
	int x,y,temp;
  
	scanf("%d\t%d",&x,&y);
  
	temp=x;
  
	x=y;
  
	y=temp;
  
	printf("%d\t%d",x,y);
  
	return 0;
  
}
