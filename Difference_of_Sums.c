#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,b,i,sum=0,c;
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        a=i*i;
        sum=sum+a;
        b=pow((x*(x+1))/2,2);
        c=b-sum;
    }
    printf("%d",c);
}