    #include <iostream>
    #include <algorithm>
    #include <vector>
    #define ll long long int
    using namespace std;
    ll X,Y,men[2000005],women[2000005],k,l;
    vector<ll> vec[2000005];
    bool visited[2000005];
    void dfs(ll s){
            visited[s]=true;
                        if(s<=X)
                            l++;
                        else
                            k++;
        
            for(ll i=0;i<vec[s].size();i++){
                if(!visited[vec[s][i]]){
                    dfs(vec[s][i]);            
                }
            }
            return;
    }
     
    int main()
    {
        ll x,y,q;
        cin>>X>>Y;
        cin>>q;
        while(q--){
            cin>>x>>y;
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        cin>>q;
        while(q--){
            cin>>x>>y;
            vec[X+x].push_back(X+y);
            vec[X+y].push_back(X+x);
        }
        cin>>q;
        while(q--){
            cin>>x>>y;
            vec[x].push_back(X+y);
           vec[X+y].push_back(x);
        }
        ll c=0;
        for(ll i=1;i<=X+Y;i++){
            if(!visited[i]){
                c++;
                k=0,l=0;
                dfs(i);
                women[c]=k;
                men[c]=l;
            }
        }
        ll ans=0;
        for(ll i=1;i<=c;i++){
           ans+=(women[i]*(X-men[i]));
        }
        cout<<ans;
        return 0;
    }
