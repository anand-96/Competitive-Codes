#include<stdlib.h>
#include<string.h>
int tower(int y)
{
int i,f=1;
for(i=0;i<y;i++)
f*=7;
return f;
}
int number(int a[],int n)
{
int i,num=0,j=n;
for(i=0;i<n;i++)
num=num+a[i]*tower(--j);
return num;
}
int main()
{
int i,j,k,l,c,t,w=0,s=0,n1,n2,arr[19],brr[19];
char a[7],b[7];
scanf("%d",&t);
for(j=0;j<t;j++)
{
    scanf("%s",&a);
    k=strlen(a);
        for(i=0;i<k;i++)
            {
            arr[i]=a[i]-48;
            }
  //  printf("%d\n",w);
    n1=number(arr,k);
   // printf("%d\n",n1);
    scanf("%s",b);
    k=strlen(b);
for(i=0;i<k;i++){
            brr[i]=b[i]-48;
            }
   // printf("%d\n",w);
       n2=number(brr,k);
//printf("%d\n",n2);
scanf("%d",&l);
if((n1%n2)!=0)
    return 0;
c=n1/n2;
c=c%tower(l);
while(c>=7)
{
   printf("%d",c/7);
c=c%7;
}
printf("%d\n",c);
}
return 0;
}

