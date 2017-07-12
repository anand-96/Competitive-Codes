#include<stdlib.h>
#include<stdio.h>
int main()
{
int flag=0;
long long int i=0,t,n=0,a,c=2,s,k,j=0,e=0;
scanf("%lld",&t);
while(t--){
    scanf("%lld",&k);
    if(k<c){
        c=2;
        i=0;
     //   printf("%d %d\n",c,i);
    }
    if(k==1)
    printf("0\n");
    else{
    while(1){
            if((c-1)%5==0)
                i+=12;
            else
                i+=2;
            if((i/100)%2==1)
                i+=100;
            if((i/1000)%2==1)
                i+=1000;
            if((i/10000)%2==1)
                i+=10000;
            if((i/100000)%2==1)
                i+=100000;
            if((i/1000000)%2==1)
                i+=1000000;
            if((i/10000000)%2==1)
                i+=10000000;
            if((i/100000000)%2==1)
                i+=100000000;
            if((i/1000000000)%2==1)
                i+=1000000000;
            if((i/10000000000)%2==1)
                i+=10000000000;
            if((i/100000000000)%2==1)
                i+=100000000000;
            if((i/1000000000000)%2==1)
                i+=1000000000000;

             if(k==c)
                break;
            c++;
        }
        printf("%lld\n",i);
    c++;
    }
}
return 0;
}
