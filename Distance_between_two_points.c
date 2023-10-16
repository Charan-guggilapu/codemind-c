#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    float d;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.4f",d);
}