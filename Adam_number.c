#include<stdio.h>
int main()
{
    int n,j,x,y,z,r,rev=0,re=0,v;
    scanf("%d",&n);
    j=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    y=rev*rev;
    while(y>0){
        v=y%10;
        re=re*10+v;
        y=y/10;
    }
    if(j*j==re){
        printf("True");
    }
    else
    {
        printf("False");
    }
}