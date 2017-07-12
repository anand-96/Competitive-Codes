#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    long int n;
    cin>>t;
    while(t--){
        cin>>n;
        long int arr[n];
        int flag=1;
        for(long int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])>1){
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
    }