#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[n],ma=0,cnt[100001]={0},ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ma=max(arr[i],ma);
        cnt[arr[i]]++;
    }
            for (int i=0;i<=ma;i++) {
               int k=0;//count of numbers that are divisible by i
               for (int j=i;j<=ma;j+=i)
                  k+=cnt[j];
               if (k>=2) ans=max(ans,i);//if count of number more than one,
               //then we have two numbers with a divider i,
               //and it is not necessarily maximum divisor of these numbers.
            }
            cout<<ans<<endl;
    }
    return 0;
}
