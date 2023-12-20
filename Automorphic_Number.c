#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c,d,e,r;
    scanf("%d",&n);
    m=n*n;
    r=log10(n)+1;
    c=log10(m)+1;
    d=pow(10,r);
    e=m%d;
    if(n==e)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}