#include<stdlib.h>
#include<stdio.h>
int main()
{
 int arr[101],i,k=0,flag=0,n,a;
 scanf("%d%d",&n,&a);
 for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
i=1;
 while(1)
 {
     if((a-i)==0) {
        flag=1;
        break;
     }
     
     if((a+i)==(n+1)) {
        flag=2;
        break;
     }
     
     if(arr[a-i]==1 && arr[a+i]==1)
        k+=2;
        
        i++;
 }
 
if(flag==1){
    for(i=a+i;i<=n;i++)
        if(arr[i]==1)
            k++;
}
if(flag==2){
    for(i=a-i;i>=1;i--)
        if(arr[i]==1)
            k++;
}
if(arr[a]==1)
k++;
printf("%d\n",k);
return 0;
}