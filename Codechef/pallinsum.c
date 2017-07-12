#include<stdio.h>
int main()
{
	int T,sum=0,i;
	int l,k,r;
	scanf("%d",&T);
	if(T<=100&&T>=1)
	{
		for(k=0;k<T;k++)
		{
			sum=0;
	scanf("%d%d",&l, &r);
	if(l<1||r>100000)
	exit(1);
     for(i=l;i<=r;i++)
  if(check(i)==i)
  sum=sum+i;
  printf("%d\n",sum);
		}
	}
	return 0;
}
int check(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
		return rev;
}