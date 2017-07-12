#include<stdlib.h>
int main()
{
    long long int N,M;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&N,&M);
        if(N==M && N%2==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
