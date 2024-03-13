#include<stdio.h>
int main()
{
	int n,s;
	scanf("%d",&n);
	int a=0,b=1,c=a+b;
	while(c<=n)
	{
		if(c==n) s=1;
		a=b;
		b=c;
		c=a+b;
	}
	if(s==1) printf("True");
	else printf("False");
}