#include<stdlib.h>
int main()
{
    int t;
    long long int r,g,b,k,min,min1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&r,&g,&b);
        scanf("%lld",&k);
        if(k<=r && k<=b && k<=g){
            printf("%lld\n",3*k-2);
        }
        else if((k<=r && k<=b && k>g) || (k<=r && k>b && k<=g) || (k>r && k<=b && k<=g))
        {
             min=b<(r<g?r:g)?b:(r<g?r:g);
             k-=min;
             printf("%lld\n",2*k-1+3*min);
        }
        else{
             min=b<(r<g?r:g)?b:(r<g?r:g);
             k-=min;
             if(min==b)
             {
                 r-=min;
                 g-=min;
                 min1=r<g?r:g;
                 k-=min1;
                 printf("%lld\n",k+2*min1+3*min);
             }
             else if(min==r)
             {
                 b-=min;
                 g-=min;
                 min1=b<g?b:g;
                 k-=min1;
                 printf("%lld\n",k+2*min1+3*min);
             }
             else{
                    r-=min;
                    b-=min;
                  min1=b<r?b:r;
                 k-=min1;
                 printf("%lld\n",k+2*min1+3*min);
             }
         }
    }
    return 0;
}



