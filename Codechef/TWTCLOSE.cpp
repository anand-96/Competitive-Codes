#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    int n,k,x;
    string s;
    cin>>n>>k;
    int arr[n+1],c=0;
        std::fill(arr, arr+sizeof(arr)/sizeof(int), 0);
    for(int i=0;i<k;i++){
        cin>>s;
        if(s=="CLOSEALL"){
        std::fill(arr, arr+sizeof(arr)/sizeof(int), 0);
            cout<<"0"<<endl;
            c=0;
        }
        else{
            cin>>x;
            if(arr[x]==0){
                arr[x]=1;
                c++;
            }
            else{
                arr[x]=0;
                c--;
            }
            cout<<c<<endl;
        }
    }
    return 0;
    }