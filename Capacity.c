#include<stdio.h>
int main()
{
    int T,S,B,C,A;
    scanf("%d%d%d",&T,&S,&B);
    C=2*T*S*B*512;
    A=C/1024;
    printf("%d KB",A);
}