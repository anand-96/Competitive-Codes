#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        long int l=str.size(),i,c=0;
        for(i=0;i<l;i++){
            if(str[i]==str[i+1]){
                c++;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}
