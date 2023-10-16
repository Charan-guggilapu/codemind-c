#include<stdio.h>
int main()
{
    float X,Y,a;
    scanf("%f%f",&X,&Y);
    a=((X-Y)/X)*100;
    printf("%.2f",a);
}