#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int rev(char*a)
{
	int i,j,k,count;
	for(i=0;i<strlen(a);i++){
		k=0,count=0;
		for(j=0;j<strlen(a);j++){
			if(a[i]==a[j])
			count++;
			else
			k++;
			}
			//printf("%d %d\n",count,k);
			if(count==k){
			printf("YES\n");
			return;
			}
	}
		printf("NO\n");
		return 0;
}
int main()
{
	int T,i,k,a,b;
	char str[50];
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%s",&str);
	
	if(strlen(str)>50||strlen(str)<1)
	       break;
	  for(k=0;k<strlen(str);k++)
if(str[k]<97||str[k]>122)
 exit(1);
	rev(str);
		}
	}
return 0;
}