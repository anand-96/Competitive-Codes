#include <iostream>
using namespace std;

int main() {
    long int t,n,c=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    c=0;
	    for(long int i=5;i<=n;i*=5){
	        c+=n/i;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
