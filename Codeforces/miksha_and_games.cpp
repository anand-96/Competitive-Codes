#include <iostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    int t,a,b,m=0,n=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b){
            m++;
        }else if(a<b){
            n++;
        }else{
            m++;n++;
        }
    }
    if(m>n)
        cout<<"Mishka"<<endl;
    else if(m<n){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
	return 0;
}
