#include<stdio.h>
void main()
{
	int i, a,N,t,l,k;
	char*str,*ptr,*p=str,*q=ptr;
	scanf("%d",&t);
	if(t>=1&&t<=20)
	{
		scanf("%d%d",&N, &k);
		for(i=0;i<N;i++,str=str+l+1)
		{
		scanf("%s",str);
			l=strlen(str);
			}
			for(i=0;i<k;i++)
			{
	           scanf("%d",&a);
	           	for(i=0;i<a;i++,ptr=ptr+l+1)
		{
		scanf("%s",ptr);
			l=strlen(ptr);
			}
			 	for(i=0;i<a;i++){
			if(!strlen(str,ptr))
			printf("YES ");
			else
				printf("NO ");
				ptr=ptr+strlen(ptr)+1;
			 	}
			}
	}
}