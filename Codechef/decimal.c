#include<stdio.h>
int power(int x,int y)
{
	int f=1,i;
	for(i=0;i<y;i++)
	f=f*x;
	return f;
}

int deci(int*a,int b,int n)
{
	int i,dec=0,j=n;
	for(i=0;i<n;i++)
	dec+=a[i]*power(b,--j);
	return dec;
}
void main()
{
	int a[10],b,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&b);
	printf("%d",deci(a,b,n));
}
