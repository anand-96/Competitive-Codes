#include<stdio.h>
int main()
{
	int T,i;
	int a,count=0;
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
			count=0;
	scanf("%d",&a);
	if(a<1||a>1000000)
         break;
	if(a%100==0){
	printf("%d\n",a/100);
	continue;
	}
if(a>=100)
{
	count=a/100;
	a=a%100;
}
while(a>=50)
{
	count++;
	a=a-50;
}
while(a>=10)
{
	count++;
	a=a-10;
}
while(a>=5)
{
	count++;
	a=a-5;
}
while(a>=2)
{
	count++;
	a=a-2;
}
while(a>=1)
{
	count++;
	a=a-1;
}
if(a==0)
printf("%d\n",count);
		}
	}
return 0;
}