#include<stdlib.h>

long long int fib[100000000];
void fibonocii(){
    int i;
        fib[1]=1;
        fib[2]=1;
    for(i=0;i<1000;i++)
    {
        fib[i+3]=(fib[i+2]+fib[i+1]) ;
        printf("%d ---- %lld\n",i,fib[i]);
    }
}

int main(){
    int N,M;
    int i;
    long long int arr[100001],X,Y,L,R;
    char ch;
    fibonocii();
  /*  for(i=1;i<5000;i++)
        printf("%d\n",i);
   /* scanf("%d %d",&N,&M);
    for(i=1;i<=N;i++)
        scanf("%lld",arr[i]);
    for(i=0;i<M;i++)
        scanf("%c %lld %lld",&ch,&X,&Y);
    if(ch=='C')
        arr[X]=Y;
    if(ch=='Q'){

        }
    */
        return 0;
}
