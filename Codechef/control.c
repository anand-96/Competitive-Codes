#include<stdio.h>
ti(int*a,int m,int*b,int k)
{
	int i,j,count=0;
	for(i=0;i<m;i++)
	{
			for(j=0;j<k;j++)
			{
			   if(a[i]==b[j]){
			   count++;
			   break;
			   }
			}
	}
	printf("%d ",count);
 return 0;
}

int main()
{
	int flag=0, T,i,a[100]={0},b[100]={0},n,m,k,j,t,p,count=0;
	scanf("%d",&T);
	if(T<=100&&T>=1)
	{
		for(p=0;p<T;p++)
		{
			count=0;
	scanf("%d%d%d",&n,&m, &k);
if(n<1||m<1||k<1||n>100||m>n||k>n)	       break;
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
scanf("%d",&b[i]);
ti(a,m,b,k);
for(j=1;j<=n;j++){
flag=0;
for(i=0;i<m;i++){
if(a[i]==j){
	flag=1;
break;
}
}
if(!flag){
for(t=0;t<k;t++){
if(b[t]==j)
break;
}
if(t==k)
count++;
}
}
printf("%d\n",count);
	}
		}
return 0;
}