
#include<stdlib.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    if(t<1||t>10000)
        exit(1);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<1||b<1||a>1000000001||b>1000000001)
            exit(1);
            if(a==b)
                printf("=\n");
            else
                printf("\n");
    }
    return 0;
}
