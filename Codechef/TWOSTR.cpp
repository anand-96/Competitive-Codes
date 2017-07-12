#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int t,i;
    string str1,str2;
    cin>>t;
    while(t--){
        cin>>str1;
        cin>>str2;
        for(i=0;i<str1.size();i++){
            if(str1[i]==str2[i])
                continue;
            else if(str1[i]!='?' && str2[i]!='?'){
                 break;   
                }
            }
            if(i==str1.size())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
   return 0;
}  