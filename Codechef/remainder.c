#include<stdio.h>
int main()
{
	int T,i;
	int a,b;
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d%d",&a, &b);
	if(a<1||a>10000||b<1||b>10000)
	break;
     printf("%d\n",a%b);
		}
	}
return 0;
}
