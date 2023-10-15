#include<stdio.h>
int main()
{
    int x,H,M;
    scanf("%d",&x);
    H=x/60;
    M=x%60;
    printf("%d Hour(s) %d Minute(s)",H,M);
}