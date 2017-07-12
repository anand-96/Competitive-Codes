#include <iostream>
#define ll long int
using namespace std;


int main()
{
    int t,x,flag=0,c=0,k=0,n;
    ll ans=0;
    cin>>t;
    while(t--){
        cin>>n;
        c=0,k=0,flag=0;
        for(ll i=1;i<=n;i++){
            cin>>x;
            if(x==0 && flag==0) 
                k=i,flag=1;
            if(x==1)
                c++;
            
        }
        if(k==0)
            ans=0;
        else
            ans=(k-1)*1000+1100*(n-k+1)-c*1000;
        cout<<ans<<endl;
    }
    return 0;
}