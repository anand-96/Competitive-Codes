#include<stdio.h>
#include<stdlib.h>
int arr[1000000];
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k,str[100000];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			str[k]=arr[i];
			i++;
		}
		else
		{
			str[k]=arr[j];
			j++;
		}
		k++;
	}

		while(i<=mid)
		{
			str[k]=arr[i];
			i++;k++;
		}
		while(j<=high)
		{
			str[k]=arr[j];
			j++;k++;
		}
	
	for(i=low;i<=high;i++)
	{
		arr[i]=str[i];
	//	printf("%d--",arr[l]);
	}
}

void divider(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		divider(arr,low,mid);		
		divider(arr,mid+1,high);
		merge(arr,low,mid,high);
	
	}
}


int main()
{
int i,ch,j,b,n,x,count=0,a[100000];
    	
    		puts("Enter number of values to be sort");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
 a[i]=rand()%100;
	puts("\nBefore Sorting the elements are........");
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
			for(i=0;i<n;i++)
	{
		arr[i]=a[i];
	}
	divider(arr,0,n-1);
	printf("\nAfter Sorting \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
    }
}
    	