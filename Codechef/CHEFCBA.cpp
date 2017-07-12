#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    float a[5];
    for(int i=0;i<4;i++)
    cin>>a[i];
    sort(a,a+4);
    if(a[3]/a[2]==a[1]/a[0])
        cout<<"Possible"<<endl;
    else if(a[3]/a[1]==a[2]/a[0])
        cout<<"Possible"<<endl;
    else if(a[3]/a[0]==a[2]/a[1])    
        cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
    return 0;
}