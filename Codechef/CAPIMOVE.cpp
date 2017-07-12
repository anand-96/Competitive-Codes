#include<bits/stdc++.h>
#define ll long int
using namespace std;
 
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
	return a.second>b.second;
}
 
 
int main()
{
	ll t,n;
	cin>>t;
	while(t--){
    ll x,u,v;
    cin>>n;
    vector<ll>a;
    vector< pair <ll,ll> >vec;
	vector< vector<ll> >arr(50003);
	for (ll i=1; i<=n; i++){
	    cin>>x;
		vec.push_back( make_pair(i,x) );
    }
	for (ll i=0; i<n-1; i++)
	{
	    cin>>v>>u;
	    arr[v].push_back(u);
	   arr[u].push_back(v);
	}
	
 
	sort(vec.begin(), vec.end(), sortbysec);
    ll k=0;
	for (ll i=1; i<=n; i++)
	{
//	    cout<<arr[i].size()<<endl;
	    if(arr[i].size()==n-1)
	    	        cout<<"0"<<" ";
	    else{
           for(ll h=0;h<vec.size();h++){
               int flag=0;
               if(vec[h].first==i){
                        continue;
                 }
	            for(ll j=0;j<arr[i].size();j++){
	                 if(vec[h].first==arr[i][j]){
	                    flag=1;
	                     break;
	                 }
    	           }
    	           k=h;
                if(flag==0)
                    break;
               }
    		cout << vec[k].first << " ";
	      }
	}
	cout<<endl;
	}
	return 0;
}