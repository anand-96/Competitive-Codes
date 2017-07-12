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
	scanf("%d%d",&a, &b);
	if(a<1||a>100000||b<1||b>100000)
	       break;
	if(a>1000){
		c=a*b*0.9;
		printf("%f\n",c);
	}
	else{
		c=a*b;
		printf("%f\n",c);
	}
		}
	}
return 0;
}