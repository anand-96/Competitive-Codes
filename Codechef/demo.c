#include<stdio.h>
void main(){
long long int n;
int flag=0;
int arr[20],j,k,i=0;
puts("Enter any numbers");
scanf("%lld",&n);
while(n>0)
{
    arr[i]=n%10;
    n=n/10;
    i++;
}
for(j=i-1;j>=0;j--)
{
    flag=0;
    for(k=j+1;k<i;k++)
    {
        if(arr[j]==arr[k])
        {
            flag=1;
        }
    }
    if(flag!=1)
        printf("%d",arr[j]);
}
}
