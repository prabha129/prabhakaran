
#include<stdio.h>
int main()
{
    int n,a[11],i,sum=0;
    int avg;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
}
 avg=sum/n;
printf("average of numbers%d",avg);
}
