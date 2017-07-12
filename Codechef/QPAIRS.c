#include<stdio.h>
#include<stdlib.h>
void sol(int*A,int a,int*B,int b,int n)
{
	int i,min=10000000000,flag=0,index;
	for(i=1;i<=n;i++)
	{
		if(A[i]>=a&&B[i]>=b)
			{
				if(min>(A[i]-a+B[i]-b))
                {
					min=A[i]-a+B[i]-b;
                    flag=1;
                    index=i;
                }
			}

	}
	if(flag)
			printf("%d\n",index);
		else
		printf("%d\n",-1);
}
void main()
{
	int n,q,i;
	int A[100001],B[100001];
	int a,b;
	scanf("%d%d",&n,&q);
	if(n<1||n>100000||q<1||q>100000)
        exit(1);
		for(i=1;i<=n;i++)
            {
			scanf("%d",&A[i]);
			if(A[i]<1||A[i]>1000000000)
                exit(1);
            }
 		for(i=1;i<=n;i++)
            {
			scanf("%d",&B[i]);
				if(B[i]<1||B[i]>1000000000)
                exit(1);
            }

		for(i=0;i<q;i++){
            scanf("%d%d",&a,&b);
			if(a<1||a>1000000000||b<1||b>1000000000)
                exit(1);
            sol(A,a,B,b,n);

            }
return 0;
}
