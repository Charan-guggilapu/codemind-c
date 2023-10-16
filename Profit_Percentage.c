#include<stdio.h>
int main()
{
    float X,Y,A;
    scanf("%f%f",&X,&Y);
    A=((Y-X)/X)*100;
    printf("%.2f",A);
}