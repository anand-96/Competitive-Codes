#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count;
int rev(int a,int b)
{
	int u,i=0,v,flag=0;
//	static int count=0;
    if(a+b>100&&a<=b){
    	printf("%d\n",0);
    return 0;
    }
    else if(a+b>=100){
    printf("from %d to %d\n",1,(a-b-1));
    if(count==0||count<(a-b-1))
    count=a-b-1;
    flag=1;
    }
    else if(a<=b||a==b+1){
     printf("from %d to %d\n",a+b+1,100);
     if(count==0||count>a+b+1){
 count=a+b+1;
     //k=100-count;
     flag=2;
     }
    }
    else{ 
  u=a+b;
  v=a-b;
			printf("from %d to %d & from %d to %d\n",1,v-1,u+1,100);
			if(count<v-1&&flag==1){
			count=count+100-u;
			}
			else if(count<v-1&&flag==2){
				count=v-count+100-u;
			}
			else if(flag==1)
			{
				if(count>v-1&&count<u+1)
				count=count+100-u;
			
			}
			else if(flag==2)
			{
				if(count>v-1&&count<u+1)
			count=100-u;
			else
			count=100-count;
			}
     }
     
     	printf("%d\n",count);
     	count=0;
		return 0;
}

int main()
{
	int T,i,k,M,x,y;
	int a[10],b,tmp[10];
	scanf("%d",&T);
	if(T<=10000&&T>=1)
	{
		for(i=0;i<T;i++)
		{
	scanf("%d%d%d",&M,&x,&y);
		if(M>10||x>10||y>10||M<1||x<1||y<1)
	       break;
	        b=x*y;
	   	       for(i=0;i<M;i++){
	       scanf("%d",&a[i]);
	       rev(a[i],b);
		}
	
		
		}
	}
return 0;
}