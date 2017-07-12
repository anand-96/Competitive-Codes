#include <iostream>
using namespace std;

int main() {
	
	int n,i,j,k;
	long long int arr[1000];
	cin>>n;
	for(i=1;i<=n;i++){
	    cin>>arr[i];
	}
	long long int min;
	min=arr[1];
	for(k=2;k<=n;k++){
	       if(min<=arr[k]){
	            min=arr[k];
	       }
	       else{
	            break;
	       }
	}
	
	for(j=k;j<=n;j=k){
    
    	for(i=j;i<=n;i+=2){
	            if(arr[i]>arr[i-1])
	                   break;
	            else{
	                long long int tmp=arr[i];
	                 arr[i]=arr[i-1];
	                 arr[i-1]=tmp;
	                }
    	}
    	min=arr[1];
	      if((i-j)%2==0)
	   cout<<j-1<<" "<<i-2<<endl;
	   
	   for(k=2;k<=n;k++){
	       if(min<=arr[k]){
	            min=arr[k];
	       }
	       else{
	            break;
	       }
	 //   cout<<arr[k-1]<<" ";
	   }
	  j=k;
    }
	
	return 0;
}