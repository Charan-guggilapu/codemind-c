#include<stdio.h>
int main()
{
    int i,n,m,r;
    scanf("%d%d%d",&n,&m,&r);
    for(i=m;i<=r;i++)
    printf("%d x %d = %d
",n,i,n*i);
}