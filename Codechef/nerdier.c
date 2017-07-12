#include<stdio.h>
void Part(int arr[],int low,int high);
void Merge(int arr[],int low,int mid,int high);
int main()
{
	int n,a[1000000],i;
	time_t t;
	printf("Enter Size ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	a[i]=rand()%1000;
	printf("Before Sort \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	Part(a,0,n-1);
	printf("\nAfter Sort \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void Part(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		Part(arr,low,mid);
		Part(arr,mid+1,high);
		Merge(arr,low,mid,high);
	}
}
void Merge(int arr[],int low,int mid,int high)
{
	int i,j,k,l,b[1000000];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
		while(i<=mid)
		{
			b[k]=arr[i];
			i++;k++;
		}
		while(j<=high)
		{
			b[k]=arr[j];
			j++;k++;
		}
	
	for(l=low;l<=high;l++)
	{
		arr[l]=b[l];
	}
}