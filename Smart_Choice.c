#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e,f;
    scanf("%d%d",&x,&y);
    a=(500-(x*2));
    b=(1000-(x+y)*4);
    e=a+b;
    c=(1000-(y*4));
    d=(500-(x+y)*2);
    f=c+d;
    if(e>f)
    printf("%d",e);
    else
    printf("%d",f);
}