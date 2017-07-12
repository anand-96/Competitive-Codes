#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    int t,n,k,x;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0,id=0;
        for(int i=0;i<n;i++){
            cin>>x>>k;
            id+=x-k;
        }
        cout<<id<<endl;
    }
    return 0;
    }