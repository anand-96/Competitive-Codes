#include <iostream>
using namespace std;

int main() {
    int t;
    string str;
	cin>>t;
	while(t--){
	    cin>>str;
	    long int l=str.size(),a=0,b=0;
	    for(long int i=0;i<l;i++){
	        if(str[i]=='1')
	            a++;
	       else
	            b++;
	    }
	    if(a==1 || b==1)
	            cout<<"Yes"<<endl;
	       else
	            cout<<"No"<<endl;
	}
	return 0;
}
