#include<stdio.h>
int b[10000];
int main()
{
    int i,j,t,k,a[1000],n,min=0;
    scanf("%d",&t);
    while(t--)
    {
        min=0,k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            a[i]=rand()%10;
           // printf("%d ",a[i]);
            ++b[a[i]];
        }
        for(j=0;j<10001;j++)
        {
            if(b[j]>min){
                min=b[j];
                k=j;
            }
            if(b[j]==min&&j<k)
                    k=j;

            b[j]=0;
        }
        printf("\n%d %d\n",k,min);
    }
    return 0;
}
