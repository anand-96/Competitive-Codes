#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string n;
    cin>>n;
    long long int l=n.size();
    for(long long int i=0;i<l-1;i++)
        cout<<n[i];
    cout<<n[l-1]<<n[l-1];
    for(long long int i=l-2;i>=0;i--)
        cout<<n[i];
    
    return 0;
}