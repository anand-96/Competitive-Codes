#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

int main() {
    long long int t,s,x;
    cin>>t>>s>>x;
    if(t==x)
        cout<<"YES"<<endl;
    else if(t>x)
        cout<<"NO"<<endl;
    else{
        if((x-t)%s==0 || (x-t-1)%s==0 && (t+1)!=x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
   return 0;
}  