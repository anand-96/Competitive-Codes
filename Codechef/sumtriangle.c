#include<stdio.h>
int triangle(int*a,int k,int*b,int t)
{
	static int sum;
	int i,j=1,x=k,y=b[t-1];
if(k-1==b[t-1]){
for(i=0;i<k;i=i+j,j++)
sum=sum+a[i];
if(i>=k){
		printf("%d\n",sum);
	exit(1);
}
}
sum=a[k]+a[b[t-1]];
	for(i=b[t-1];i>b[t-2];i--,k--)
	{
	if(sum<a[k]+a[i]){
sum=a[k]+a[i];
x=k,y=i;
	}
	if(a[i]+a[k-1]>sum){
	sum=a[i]+a[k-1];
	x=k-1,y=i;
	}
//		printf("%d\n",sum);
	}
	printf("%d %d %d\n",sum,x, y);
	if(b[t]>0)
	triangle(a,b[t-1],b,t-1);
 }
 
int main()
{
	int T,i,a[100],b[100],k=-1,t=-1,n,j,x;
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d",&n);
	if(n<1||n>100)
	       break;
for(i=1;i<=n;i++){
for(j=0;j<i;j++){
scanf("%d",&x);
a[++k]=x;
}
	b[++t]=k;
		}
		triangle(a,k,b,t);
	}
	}
return 0;
}