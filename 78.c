#include <stdio.h>

int main(void) {
	int m,n,ans;
	printf("enter two numbers");
	scanf("%d%d",&m,&n);
            ans=m*n;
            if(ans%2==0)
            printf("even");
            else
            printf("odd");
	return 0;
}
