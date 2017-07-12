#include<stdio.h>
int occur(char*str)
{
	int i, c=0;
	for(i=0;str[i];i++)
	if(str[i]-48==4)
	c++;
return c;
}
int main()
{
	int t,j,i;
	char str[10];
	scanf("%d",&t);
	if(t>=1&&t<=100000)
	{
			for(i=0;i<t;i++){
	scanf("%s",str);
	j=strlen(str);
		if(j>=0&&j<10)
	printf("%d\n",occur(str));
	if(str[0]-48==1&&str[9]-48==0)
	puts("0");
			}
	}
	return 0;
}