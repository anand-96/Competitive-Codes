#include<stdlib.h>
int main()
{
    int i,j,n,p,q;
    int arr[100000];
    scanf("%d",&n);
    for(i=1000;i<n+1000;i++)
        scanf("%d",&arr[i]);
    p=999;
    q=n+1000;
    for(i=1001;i<=(n+1000);i++)
    {
        if(arr[i-1]>arr[i])
        {
            if(i<n+1000-i)
            {
                arr[p--]=arr[i];
                //printf("%d ",arr[i]);
                arr[i]=0;
            }
        else
            {
                arr[q++]=arr[i-1];
               // printf("%d ",arr[i-1]);
                arr[i-1]=0;
            }
        }
    }
    for(i=p;i<q;i++)
    {
        if(arr[i]==0)
           continue;
        else
        printf("%d ",arr[i]);
    }
}
