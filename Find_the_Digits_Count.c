#include<stdio.h>
int main()
{
    int x,i,dc=0;
    scanf("%d",&x);
    while(x>0)
    {
        dc++;
        x=x/10;
    }
    printf("%d",dc);
}