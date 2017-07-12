#include<stdio.h>
int GCD(int a, int b){
	int min, i,j=(a>b?a:b);
	for(i=2,min=1;i<=j;i++)
	{
		if(a%i==0&&b%i==0&&min<i)
		{min=i;}
			if(i==a||i==b)
		break;
	}
	printf("%d ",min);
	}
	
int LCM(int a, int b){
	int i, c=1;
	   for(i=2;a!=b;){
	   	if(a%i==0||b%i==0){
		c=c*i;
		if(a%i==0)
		a=a/i;
	if(b%i==0)
	b=b/i;
		i=2;
	}
	else i++;
	}
	if(a!=1)
	c=c*a;
		printf("%d\n",c);
		}
		
int main()
{
	int T,i,a,b,c=1;
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d%d",&a, &b);	if(a<1||a>100000||b<1||b>100000)
	       break;
	       GCD(a,b);
	        LCM(a,b);
		}
	}
	return 0;
}
