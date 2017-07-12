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
	if(a<1||a>100000)
	       break;
	if(a<1500){
		c=a+0.1*a+0.9*a;
		printf("%g\n",c);
	}
	else{
		c=a+500+0.98*a;
		printf("%g\n",c);
	}
		}
	}
return 0;
}