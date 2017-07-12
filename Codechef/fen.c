//fenwick tree or Binary Indexed tree implementation
#include<stdio.h>

long int prefixSum(long int n,long int tree[])
{
    long int sum=0;
	while(n>0)
	{
	sum=sum+tree[n];
	n=n-(n&(-n));
	}
//	printf("cumulative freq upto %ld is %ld\n",n,sum);
	return sum;
}

int main()
{
long int sum=0,psum,add,i,j,k,l,x,freq[10000],tree[10000],n,m,max=-100000,p,q;
int count=0;
scanf("%ld",&n);

for(i=0;i<n;i++)
scanf("%ld",&freq[i]);

if(n==2)
{
    if(freq[0]<0 || freq[1]<0)
   printf("%ld\n",freq[0]>freq[1]?freq[0]:freq[1]);
   else
    printf("%ld\n",freq[0]+freq[1]);
   return;
}
// building fenwick tree
for(i=1;i<=n;i++)
{
	add=freq[i-1];
	j=i;
		while(j<=n)
		{
		tree[j]=tree[j]+add;
		j=j+(j&(-j));
		}
}


//query of type 2 , To find prefix sum of index l
for(i=1;i<n;i++){
    count=0;
   for(j=i+1;j<=n;j++)
    {
       psum=prefixSum(j,tree)-prefixSum(i-1,tree);
       printf("%ld  ",psum);
    }
    }
    puts("");
//printf("p=%d,q=%d\n",p,q);

return 0;
}
