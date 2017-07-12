#include<stdio.h>
int main()
{
	int T,i,a;
	scanf("%d",&T);
	if(T<=20&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d",&a);
	if(a<1||a>100000)
	       break;
if(prime(a))
printf("yes\n");
else
printf("no\n");
		}
	}
return 0;
}
int prime(int n)
{
	int i;
    for(i=2;i<n;i++){
    if(n%i==0)
    return 0;
    }
    return 1;
}