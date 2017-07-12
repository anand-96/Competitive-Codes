#include<stdio.h>
int main()
{
	int T,i, x,a[40],b[40],c[40];
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d",&x);
	if(x<2||x>10)
	break;
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
if(strlen(a)<1||strlen(a)>80/x||strlen(b)<1||strlen(b)>80/x||strlen(b)<1||strlen(b)>80/x)
	       break;

		}
	}
return 0;
}
