#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        for(k=a;k>i;k--){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        for(l=j;l>1;l--){
        printf("%d ",l);
        }
        printf("
");
    }
}