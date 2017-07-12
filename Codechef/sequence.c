#include<stdio.h>
	int a[100000],b[100000];
int main()
{
	int T,i,m,n,t;
	int x,j,k;
	scanf("%d",&T);
	if(T<=10&&T>=1)
	{
		for(i=0;i<T;i++)
		{
			scanf("%d",&n);
				for(j=0;j<n;j++)
	scanf("%d",&a[j]);
		scanf("%d",&m);
		for(k=0;k<m;k++)
				scanf("%d",&b[k]);
					for(k=0;k<n;k++)
                	if(b[0]==a[k])
                         break ;
        	for(t=0;t<m;t++)
        	if(b[t]!=a[k++])
                   break ;
		if(t==m&&a[k-1])
		printf("Yes\n");
		else printf("No\n");
		}
	}
	return 0;
}