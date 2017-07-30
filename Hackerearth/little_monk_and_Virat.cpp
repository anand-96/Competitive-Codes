    #include <iostream>
    #include <vector>
    #define ll long int
    #include <algorithm>
    using namespace std;
    vector<ll>a,b,c,ans;
    int main()
    {
        ll n,k,q,x;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }
        for(ll i=0;i<n;i++){
            cin>>x;
            b.push_back(x);
        }
        for(ll i=0;i<n;i++){
            cin>>x;
            c.push_back(x);
        }
        for(ll i=0;i<n;i++){
            ans.push_back(a[i]+b[i]+c[i]);
        }
        sort(ans.begin(),ans.end());
        cin>>q;
        while(q--){
            cin>>k;
            if(k>ans.size())
                cout<<"-1"<<endl;
            else{
                cout<<ans[k-1]<<endl;
                ans.erase(ans.begin()+k-1);
            }
        }   
        return 0;
    }
