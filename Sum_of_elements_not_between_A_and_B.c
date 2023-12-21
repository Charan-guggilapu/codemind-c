#include<stdio.h>
int main()
{
    int n,x,y,i,a[100],sum=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d %d",&x,&y);
    int flag=0;
     for(i=0;i<n;i++){
         if(a[i]<x || a[i]>y){
             sum+=a[i];
             //printf("%d ",sum);
             flag=1;
         }
         
     }printf("%d ",sum);
     
}