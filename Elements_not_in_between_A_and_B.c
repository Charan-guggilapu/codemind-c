#include<stdio.h>
int main()
{
    int n,x,y,i,a[100];
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d %d",&x,&y);
    int flag=0;
     for(i=0;i<n;i++){
         if(a[i]<x || a[i]>y){
             printf("%d ",a[i]);
             flag=1;
         }
         
     }
     if(flag==0)
     printf("-1");
}