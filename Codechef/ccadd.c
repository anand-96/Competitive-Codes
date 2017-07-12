

#include<stdio.h>
#include<stdlib.h>
char n[7];
int add()
{
	int rev,i;
 for(i=0;n[i];i++);
 	rev=n[0]+n[i-1]-96;
return rev;
}
int main()
{
	int i,t,j;
	scanf("%d",&t);
	if(t>=1&&t<=1000)
				{
for(i=0;i< t;i++){
scanf("%s",n);
for(j=0;n[j];j++);
if(j-1<6)
		printf("%d\n",add());
if(n[0]-48==1&&j==7&&n[j-1]-48==0)
puts("1");
	}
				}
return 0;
}
