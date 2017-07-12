#include <iostream>
using namespace std;

int res[102]={0};
int main() {
	int t,n,k,c=0;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    c=0;
	    int arr[n+1];
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        if(arr[i]!=i){
	            res[arr[i]]++;
	        }else{
	            res[arr[i]]=-101;
	        }
	    }
	    for(int i=1;i<=n;i++){
	        if(res[i]>=k)
	            c++;
	       res[i]=0;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
