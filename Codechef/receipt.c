#include<stdio.h>
#include<stdlib.h>
void main()
{
	int T,i,a,j,k=0;
	scanf("%d",&T);
	if(T<=5&&T>=1)
	{
		for(j=0;j<T;j++,k=0)
		{
	scanf("%d",&a);
	if(a<1||a>100000)
	       break;
	       i=2048;
while(a<i)
i=i/2;
	while(a){
	a=a-i;
	k++;
	for(;i>a;i/=2);
	}
printf("%d\n",k);
	       }
	}
}