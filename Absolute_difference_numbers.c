#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,g,f;
    scanf("%d %d",&a,&b);
    c=log10(a)+1;
    d=pow(10,b);
    e=a%d;
    f=pow(10,c-b);
    g=a/f;
    printf("%d",abs(g-e));
    
    
}