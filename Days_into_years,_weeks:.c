#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);
    a=x/365;
    b=(x%365)/7;
    printf("%d
%d",a,b);
}