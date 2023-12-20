#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,i,t,r;
    double sum=0;
    scanf("%lf %lf",&a,&b);
    for(i=a;i<=b;i++){
        t=sqrt(i);
        sum=sum+t;
    }
    printf("%.2lf ",sum);
    
}