#include<stdio.h>
int main()
{
    int k,n,m,t,i;
    scanf("%d",&t);
    scanf("%d%d%d",&n,&m,&k);
    if(n+k<m) printf("YES
");
    else printf("NO
");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+c<b) printf("YES
");
    else printf("NO");
}