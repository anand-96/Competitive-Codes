#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll n,b,d,x,sum=0,c=0;
	cin>>n>>b>>d;
	for(ll i=0;i<n;i++){
	    cin>>x;
	    if(x<=b){
	       sum+=x;
	       if(sum>d){
	            sum=0;
	            c++;
	       }
	    }
	}
	cout<<c<<endl;
	return 0;
}