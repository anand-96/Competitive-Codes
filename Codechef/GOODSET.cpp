#include <stdio.h>
#include <cstring>
#include <iostream>
#define ll long long int
using namespace std;

int main(){
        ll t,x;
        cin>>t;
        while(t--){
                cin>>x;
                ll a=1,b=2,c=4;
                if(x==1)
                        cout<<a;
                else if(x==2)
                        cout<<a<<" "<<b<<" ";
                else{
                        cout<<a<<" "<<b<<" ";
                        for(int i=3;i<=x;i++){
                            cout<<c<<" ";
                            c=c+3;               
                        }
                    }           
                cout<<endl;
        }       
        return 0;
}