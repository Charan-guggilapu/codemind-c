#include<stdio.h>
int main()
{
    int n,count=1,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=count;
        count++;
    }
    printf("%d",sum);
}