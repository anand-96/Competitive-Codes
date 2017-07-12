#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

     
    int main() {
        int t,N;
        long long int temp,min;
        vector<long long int>arr;
            cin>>t;
        while(t--){
            cin>>N;
            for(int i=0;i<N;i++){
                cin>>temp;
                arr.push_back(temp);
            }
            min=2e10;
            sort(arr.begin(),arr.end());
            for(int i=0;i<N;i++){
                if(min>abs(arr[i]-arr[i+1]))
                    min=abs(arr[i]-arr[i+1]);
            }
            cout<<min<<endl;
            arr.clear();    
        }
       	return 0;
    }  