#include<stdio.h>
int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    if(M*K>=N)
    printf("YES");
    else
    printf("NO");
}