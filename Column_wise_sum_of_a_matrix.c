#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],sum1=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        sum1=0;
        for(i=0;i<n;i++){
        sum1+=a[i][j]; 
      }printf("%d ",sum1);
    }
    
}