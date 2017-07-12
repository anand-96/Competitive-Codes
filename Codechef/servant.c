#include<stdio.h>
int main()
{
	int T,i,a,b;
	float c;
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d",&a);
	if(a<-20||a>20)
	       break;
	if(a<10)
		printf("What an obedient servant you are! \n");
	else
		printf("%d\n",-1);
		}
	}
return 0;
}