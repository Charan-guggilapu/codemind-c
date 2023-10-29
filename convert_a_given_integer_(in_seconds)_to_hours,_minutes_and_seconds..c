#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/3600;
    c=a%3600;
    d=c/60;
    printf("H:M:S-%d:%d:%d",b,d,c%60);
}