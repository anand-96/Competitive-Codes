#include<stdio.h>
#include<string.h>
int *check(char*n);
int main()
{
	int a[10000];
	int k,T,i,flag=0;
	scanf("%d",&T);
	if(T<=20&&T>=1)
	{
		for(k=0;k<T;k++)
		{
	scanf("%s",&a);
	if (!strcmp(a,"10000"))
	goto ABC;
	if(a[0]==0||strlen(a)>4)
	  break;
	  ABC:	
       for(i=0;a[i];i++)
     //  if(a[i]<0||a[i]>)
      // break;
  if(!strcmp(check(a),a))
  printf("wins\n");
  else 
    printf("losses\n");
		}
	}
	return 0;
}
int *check(char*n)
{
	char rev[10000];
	int l=strlen(n),i=0;
	while(l>=0)
	{
		rev[i++]=n[l-1];
		l--;
	}
		return rev;
}