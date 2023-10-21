#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=21-(x+y);
    if(z>0 && z<11)
    printf("%d",z);
    else
    printf("-1");
}