    #include <iostream>
    using namespace std;
    #include <map>
    #define ll long int
    int main()
    {
    	ll x,n,q;
    	string s;
    	map<ll,string>mp;
    	cin>>n;
    	while(n--){
    		cin>>x>>s;
    		mp[x]=s;
    	}
    	cin>>q;
    	while(q--){
    		cin>>x;
    		map<ll,string>::iterator it;
    		it=mp.find(x);
    		cout<<it->second<<endl;
    	}
        return 0;
    }
