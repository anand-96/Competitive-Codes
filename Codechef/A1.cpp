#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
     
    int main() {
        int T,N,M;
        vector<int> arr;
        cin>>T;
        while(T--){
            cin>>N>>M;
            int temp,flag=0,sum=0;
            for(int i=0;i<N;i++){
                cin>>temp;
                arr.push_back(temp);
            }
            for(int i=0;i<(1<<arr.size());i++){
                for(int j=0;j<arr.size();j++){
                    if(i&(1<<j)){
                        sum+=arr[j];
                    }
                }
                if(sum==M){
                    cout<<"Yes"<<endl;
                    flag=1;
                    break;
                }
                else
                    sum=0;
            }
            if(flag==0){
                cout<<"No"<<endl;
            }
            arr.clear();
        }
       	return 0;
    }      