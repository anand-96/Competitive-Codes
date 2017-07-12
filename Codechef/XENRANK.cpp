#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
    ll t,u,v;
    cin>>t;
    while(t--){
        cin>>u>>v;
        ll n=u+v;
        ll ans=(n*n+n+2)/2+u;
        cout<<ans<<endl;
    }
	return 0;
}
