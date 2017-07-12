#include<stdio.h>
int main()
{
	int T,i,b,a;
	scanf("%d",&T);
	if(T<=10000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d%d",&a,&b);
	if(a<1||a>1000000001||b<1||b>1000000001)
	       break;
if(a<b)
printf(" \n");
else if(a>b)
printf(" \n");
else 
printf("=\n");
		}
	}
return 0;
}
