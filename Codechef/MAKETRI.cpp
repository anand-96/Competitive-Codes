    #include <iostream>
    #include <cmath>
    #include <vector>
    #include <algorithm>
    #include <map>
    #include <set>
    #define ll long long int
    using namespace std;
     
     
    struct range
    {
	    ll s, e;
    };

bool comp(range a, range b)
{
    return a.s > b.s;
}

void solve(range arr[],ll n)
{
	sort(arr,arr+n,comp);

	ll index = 0;
	
	for(ll i=0;i<n;i++){
		if(index!=0 && arr[index-1].s<=arr[i].e)
		{
			while (index!=0 && arr[index-1].s<=arr[i].e)
			{
				arr[index-1].e=max(arr[index-1].e,arr[i].e);
				arr[index-1].s=min(arr[index-1].s,arr[i].s);
				index--;
			}
		}
		else 
			arr[index]=arr[i];

		index++;
	}
    ll ans=0;
	for (ll i=0;i<index;i++){
//		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
		ans+=(arr[i].e-arr[i].s+1);
	}
	cout<<ans;
}

 
    int main()
    {
        ll n,l,r,x,y,a,b;
        vector<ll>arr;
        set<ll>s;
        cin>>n>>l>>r;
        for(ll i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        
        if(n>=2 && n<=100 && r>=1 && r<=1000000){
            for(ll i=1;i<n;i++){
                x=arr[i]-arr[i-1]+1;
                y=arr[i]+arr[i-1]-1;
            
                if(y>=l && x<=r){
                    a=max(l,x);
                    b=min(r,y);
//                    ans+=(b-a+1);
                    for(ll j=a;j<=b;j++)
                        s.insert(j);
    //            cout<<a<<"---"<<b<<endl;
                }
            }
        cout<<s.size();
            
        }else{
            
            range X[1000004];
            ll k=0;
            for(ll i=1;i<n;i++){
                x=arr[i]-arr[i-1]+1;
                y=arr[i]+arr[i-1]-1;
            
                if(y>=l && x<=r){
                    a=max(l,x);
                    b=min(r,y);
                    X[i-1].s=a;
                    X[i-1].e=b;
  //              cout<<a<<"---"<<b<<endl;
                    k++;
                }
            }
            solve(X,k);
      //  cout<<(b-a+1);
        }
        return 0;
    } 