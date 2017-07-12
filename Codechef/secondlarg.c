#include<stdio.h>
void check(int a, int b,int c)
{	a>b&&a>c?(b>c?printf("%d\n",b):printf("%d\n",c)):((a>b&&a<c||a<b&&a>c)?printf("%d\n",a):(b>c?printf("%d\n",c):printf("%d\n",b)));
}
void main()
{
	int T,i;
	int a,b,c;
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d%d%d",&a, &b,&c);	if(a>=1&&b>=1&&c>=1&&a<=1000000&&b<=1000000&&c<=1000000)
     check(a,b,c);
		}
	}
}

