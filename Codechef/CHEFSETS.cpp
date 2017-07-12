#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
int main() {
    int t;
    ll arr[4],sum;
    vector<ll>vec;
    cin>>t;
    while(t--){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        for(int i=1;i<16;i++){
            for(int j=0;j<4;j++){
                if(i&(1<<j)){
            //        cout<<arr[j]<<" ";
                    vec.push_back(arr[j]);
                }
            }
            //cout<<endl;
             sum=0;
            for(std::vector<ll>::iterator it = vec.begin(); it != vec.end(); ++it)
                sum += *it;
            if(sum==0){
                cout<<"Yes"<<endl;
                break;
            }
            vec.clear();
       }
       if(sum)
        cout<<"No"<<endl;
        vec.clear();
    }
	return 0;
}
