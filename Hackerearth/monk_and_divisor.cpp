     #include <iostream>
    using namespace std;
    #define ll long int
     
    ll gcd(ll a,ll b){
    	if(b==0)
    		return a;
    	else
    		return gcd(b,a%b);
    	}
     
    ll d[200005]={0},f[200005]={0};
    int main()
    {
    	ll n,t,p,q,x;
    	cin>>n;
    	ll arr[n];
    	for(int i=1;i<=n;i++){
    		cin>>arr[i];
    		f[arr[i]]++;
    	} 
    	cin>>t;
    	for(ll i=1;i<=200000;i++){
    		for(ll j=i;j<=200000;j+=i){
    			d[i]+=f[j];
    		}
    	}
    	while(t--){
    		ll p,q,c=0,lcm,temp;
    		cin>>p>>q;
    		lcm=(p*q)/gcd(p,q);
    		if(lcm>200000)
    			temp=0;
    		else
    			temp=d[lcm];
    		cout<<d[p]+d[q]-temp<<endl;
    	}
        return 0;
    }
