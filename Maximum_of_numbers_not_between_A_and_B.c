#include<stdio.h>
int main()
{
    int n,x,y,i,a[100],sum=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max1=0;
    for(i=0;i<n;i++){
        if(max1<a[i])
        {
            max1=a[i];
        }
    }
       
    scanf("%d %d",&x,&y);
    int flag=0;
    int max=0;
     for(i=0;i<n;i++){
         if(a[i]<x || a[i]>y){
             if(a[i]>max){
                 max=a[i];
                 flag=1;
             }
            
         }
         
     }
     if(max1==max)
     printf("%d ",max);
     else if(max1!=max)
     printf("-1");
     
     
}