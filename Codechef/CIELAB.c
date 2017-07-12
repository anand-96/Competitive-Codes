#include<stdlib.h>
#include<math.h>
int main()
{
    int i=0,a,b,c,arr[6];
    scanf("%d %d",&a,&b);
    c=abs(a-b);
    while(c>0)
    {
        arr[i++]=c%10;
        c/=10;
    }
    if((arr[i-1]+1)!=0)
        printf("%d",arr[i-1]+1);
    else
        printf("%d",arr[i-1]+2);

    for(;i>=2;i--)
    {
        printf("%d",arr[i-2]);
    }
    return 0;
}
