#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f",&a);
    b=a*1.20;
    c=a*1.50;
    d=a*1.80;
    e=a*2.00;
    if(a<=199)
    printf("%.2f",b+100);
    else if(a>=200 && a<400)
    printf("%.2f",c+100);
    else if(a>=400 && a<600)
    printf("%.2f",d+(d*15/100));
    else 
    printf("%.2f",e+(e*15/100));
}