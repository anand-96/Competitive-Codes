#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int>vec;
    int t,n,m,x,c=0;
	map<int,int>mp;
	map<int,int>::iterator it;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    c=0;
	    for(int i=0;i<n;i++)  {
	        cin>>x;
	        vec.push_back(x);
	    }
	    for(int i=0;i<m;i++)  {
	        cin>>x;
	        mp[x]=1;
	    }
	    for(int i=0;i<n;i++)  {
	        x=vec[i];
	        it=mp.find(x);
	        if(it!=mp.end())
	            c++;
	    }
	    mp.clear();
	    vec.clear();
	    cout<<c<<endl;
	}
	return 0;
}
