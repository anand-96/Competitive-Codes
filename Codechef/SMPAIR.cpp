#include <iostream>
using namespace std;

int main() {
	long int t,n,min,min2;
	cin>>t;
	while(t--){
	    cin>>n;
	    long int arr[n];
	    min=2e9,min2=2e9;
	    for(long int i=0;i<n;i++){
	        cin>>arr[i];
	        if(min>arr[i])
	            min=arr[i];
	    }
	    for(long int j=0;j<n;j++){
	        if(min!=arr[j] && min2>arr[j])
	            min2=arr[j];
	    }
	    cout<<(min+min2)<<endl;
	}
	return 0;
}
