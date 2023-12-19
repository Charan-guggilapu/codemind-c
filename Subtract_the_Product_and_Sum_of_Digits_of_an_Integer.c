#include<stdio.h>
int main()
{
    int n,i,sum=0,p=1,r,s;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum+=r;
        p*=r;
        n/=10;
    }
    printf("%d",p-sum);
}