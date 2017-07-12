#include<stdlib.h>

long long expoBySquaring(long long base,long long exp)
{
    long long res=1;
    while(exp>0)
    {
        if(exp%2==1)
            res=(res*base)%1000000007;
        base=(base*base)%1000000007;
        exp/=2;
    }
    return res%1000000007;
}
int main()
{
    long int t;
    long long int n,k,ans;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        ans=k*expoBySquaring(k-1,n-1);
        printf("%lld\n",ans%1000000007);
    }
}
