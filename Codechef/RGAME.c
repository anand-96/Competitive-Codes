#include<stdlib.h>
int main()
{
    int sum,total;
    int i,j,n,t,arr[100001];
    scanf("%d",&t);
    while(t--)
    {
        total=0;
        scanf("%d",&n);
        for(i=0;i<=n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1,sum=0;j<=n;j++)
            {
                sum+=arr[i]*arr[j];
            }
            total+=2*sum;
        }
        printf("%d\n",total);
    }
}
