#include<stdio.h>
int main()
{
    int i,n,t,r,flag=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		c++;
    	}
    }
    if(c==2)
	{
		t=n;
    }
    while(t!=0)
    {
    	r=t%10;
    	if(r==2 || r==3 || r==5 || r==7)
    	{
    		flag=0;
    		t/=10;
		}
		else
		{
		t/=10;
		flag=1;
	    }
	}
    if(flag==0)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
}