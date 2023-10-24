#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%y==0)
    printf("0");
    else
    printf("%d",y-(x%y));
}