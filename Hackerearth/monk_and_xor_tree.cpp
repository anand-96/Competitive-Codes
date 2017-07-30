    #include <iostream>
    using namespace std;
    #include <vector>
    #define ll long long int
    ll ha[10000000],a[100005],ans=0,k,n,x;
    vector<ll> vec[100005];
     
    void dfs(ll y,ll xo){
    	xo^=a[y];
    	ans+=ha[xo^k];
    	ha[xo]++;
    	for(ll i=0;i<vec[y].size();i++){
    		dfs(vec[y][i],xo);
    	}
    	ha[xo]--;
    }
     
    int main(){
    	cin>>n>>k;
    	for(ll i=1;i<=n;i++)
    		cin>>a[i];
    	ha[0]=1;
    	for(ll i=1;i<=n-1;i++){
    		cin>>x;
    		vec[x].push_back(i+1);
    	}
    	dfs(1,0);
    	cout<<ans<<endl;
    	return 0;
    }
