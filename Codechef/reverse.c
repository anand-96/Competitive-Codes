#include<stdio.h>
#include<stdlib.h>

int reverse(int n)
{
	int k=0,i,j;
		while(n){
	    k=k+n%10;
	    n/=10;
		}
		return k;
}
int main()
{
	int n;
	int i,t;
	scanf("%d",&t);
	if(t>=1&&t<=1000)
				{
for(i=1;i<=t;i++){
	scanf("%d",&n);
	if(n>100000||n<1)
	break;
	printf("%d\n",reverse(n));
	}
				}
return 0;
}