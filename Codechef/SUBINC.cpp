#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long int arr[n],Brr[n],sum=0,ans=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        Brr[i]=1;
	    }
	    sum+=Brr[0];    
	    for(int i=1;i<n;i++){
	        if(arr[i]>=arr[i-1]){
	            Brr[i]=Brr[i-1]+Brr[i];
	        }
	        sum+=Brr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
