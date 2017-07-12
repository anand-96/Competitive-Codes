#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll A[n],ans=0,s=0,k=0;
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        ll i;
        for(i=n-1;i>=0;i--){
            if(A[i]<0){
                break;
            }
            s+=A[i]; 
            k++;
        }
        ll j=i,ans1,ans2,sub=0;
        for(;i>=0;i--)
            sub+=A[i];
//        ans+=(s*k);
        ans=s*k+sub;
  //        cout<<ans<<endl;
        for(;j>=0;j--){
            k++;
            ans2=(s+A[j])*k+sub-A[j];
    //        cout<<ans2<<endl;
            if(ans<ans2){
                ans=ans2;
                s+=A[j];
                sub-=A[j];
            }else{
                break;
            }
//            ans=max((s+A[i])*k,ans+A[i]);
        }
        cout<<ans<<endl;
    }
	return 0;
}
