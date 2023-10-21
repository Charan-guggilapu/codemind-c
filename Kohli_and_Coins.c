#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    y=x/10;
    z=y+ 1;
    if(x%10==0)
    printf("%d",y);
    else if(x%10!=0 && x%5==0)
    printf("%d",z);
    else
    printf("-1");
}