#include<stdio.h>
int main()
{
	int T,i,j,k,n,flag=0;
	char a[1000];
	scanf("%d",&T);
	if(T<=1000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d",&n);
	if(n<1||n>1000)
	       break;
	     scanf("%s",&a);
	     if(strlen(a)!=n)
	     break;
	      for(j=0;j<n;j++)
	     	if(a[j]!='Y'&&a[j]!='I'&&a[j]!='N')
	     exit(1);
	       for(j=0;j<n;j++){
	       	flag=0;
	if(a[j]=='I')
	  {
	printf("INDIAN\n");
	flag=1;
	break;
	  }
	       }
	         for(j=0;j<n;j++){
	         	if(flag==1)
	         	break;
	if(a[j]=='Y')
	{
		printf("NOT INDIAN\n");
		flag=1;
		break;
	}
	         }
		 if(flag==0)
			printf("NOT SURE\n");
		}
	}
return 0;
}