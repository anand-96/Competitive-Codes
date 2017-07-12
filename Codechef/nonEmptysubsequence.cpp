#include<stdlib.h>
#include<stdio.h>
int main()
{
int flag=0,i;
long long int t,k,p,q;
int n[20]={0};
scanf("%lld",&t);
while(t--){
    scanf("%lld",&k);
    if(k==1)
    printf("0\n");
    else{

        if (k%5==1)
            n[0]=0;
        else if(k%5==2)
            n[0]=2;
        else if(k%5==3)
            n[0]=4;
        else if(k%5==4)
            n[0]=6;
        else if(k%5==0)
            n[0]=8;
        i=2;
        p=5;
     while(i<20){
        q=p;
        p=p*5;
        if((k%p>=1) && (k%p<=q))
            n[i-1]=0;
        else if((k%p>=q+1) && (k%p<=2*q))
            n[i-1]=2;
        else if ((k%p>=2*q+1) && (k%p<=3*q))
            n[i-1]=4;
        else if((k%p>=3*q+1) && (k%p<=4*q))
            n[i-1]=6;
        else if((k%p>=4*q+1) && (k%p<=5*q) || (k%p==0))
            n[i-1]=8;
        i++;
     }

         flag=0;
    i=19;
    while(i>=0){
        if(n[i]!=0 && flag==0){
            printf("%d",n[i]);
            flag=1;
            break;
        }
        i--;
    }
    i--;

    while(i>=0){
        printf("%d",n[i]);
        i--;
        }
        puts("");
    }
}
return 0;
}
