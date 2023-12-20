#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        for(k=a;k>i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        for(l=j-i;l>1;l--){
        printf("%d ",l);
        }
        printf("
");
    }
}