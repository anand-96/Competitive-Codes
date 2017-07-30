    #include <iostream>
    using namespace std;
    #define ll long int
    #include <map>
    #include <algorithm>
    map<ll,ll>mp;
     
    bool pred(const pair<ll, ll>&a,const pair<ll, ll>&b)
    {
    return a.second < b.second;
    }
     
     
    int sumOfDigits(ll x)
    {
        int sum = 0;
        while (x != 0)
        {
            sum += x %10;
            x   = x /10;
        }
        return sum;
    }
     
    int main()
    {   
        ll n;
        cin>>n;
        ll x,s;
        for(int i=0;i<n;i++){
            cin>>x;
            s=x^(sumOfDigits(x));
          //  cout<<s<<endl;
            mp[s]++;
        }
        map<ll,ll>::iterator it;
        ll ma=0,m=0,c=0,mi=2e9;
        for(it=mp.begin();it!=mp.end();it++){
                ma=max(ma,it->second);
                c+=(it->second-1);
                if(it->second==1)
                    m=max(it->first,m);
           // cout<<it->first<<"--"<<it->second<<endl;
        }
        for(it=mp.begin();it!=mp.end();it++){
                if(it->second==ma){
                    mi=min(it->first,mi);
                }
        }
        if(ma==1)
        cout<<m<<" "<<c<<endl;
        else
        cout<<mi<<" "<<c<<endl;
        return 0;
    }
