#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll n,a,b,t;
	cin>>n;
	if(n==1 || n==2)
	    cout<<"-1"<<endl;
	else{
	    t=n*n;
	    if(n%2==0){
	        a=t/4+1;
	        b=t/4-1;
	    }
	    else{
	        a=(t+1)/2;
	        b=(t-1)/2;
	    }
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}