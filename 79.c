#include<stdio.h>
#include<string.h>
int main()
{
    char data[50];
    int l,i,r1,r2,r3,t;
    
    r1=r2=r3=0;
    scanf("%s",&data);
    l = strlen(data);
    for(t=0;t<l;t++){
        i = (int)data[t];
        if(i>=97 && i <= 122) r1 = 1;
        if(i>=48 && i <= 57) r2 = 1;
        if(i>=65 && i <= 90) r1 = 1;
    }
    if(r1+r2 == 2) printf("yes");
    else printf("no");
    return 0;
}


