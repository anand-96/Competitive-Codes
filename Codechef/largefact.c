#include<stdio.h>
int main(){
int a[1000000],index,i,j,n,tmp,counter=0;
printf("\n Enter the no : ");
scanf("%d",&n);
a[0]=1;
index=0;
for(j=n;j>=2;j--){
tmp=0;
for(i=0;i<=index;tmp=(a[i]*j)+tmp){
a[i]=tmp%10;
tmp=tmp/10;
}


while(tmp>0){
a[++index]=tmp%10;
tmp=tmp/10;
}
}

printf("\n The factorial of %d is : \n",n);
for(i=index;i>=0;i--)
printf("%d",a[i]);
return 0;
}
