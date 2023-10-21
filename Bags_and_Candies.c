#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x%(y*z)==0)
    printf("%d",x/(y*z));
    else
    printf("%d",x/(y*z)+ 1);
}