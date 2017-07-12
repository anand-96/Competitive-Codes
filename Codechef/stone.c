#include<stdlib.h>
#include<stdio.h>
int main()
{
 int i,j;
long long int t,m,n1,n2;
scanf("%ld",&t);
for(j=0;j<t;j++)
{
scanf("%lld%lld%lld",&n1,&n2,&m);
for(i=m;i>0;i--)
	{
if(n1<i||n2<i){
i=(n1>n2?n2:n1)+1;
continue;
}
        n1=n1-i;
       n2=n2-i;
     }
printf("%lld\n",n1+n2);
}
return 0;
}
