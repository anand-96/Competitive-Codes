#include <iostream>
using namespace std;
 
int main() {
	int t,n;
	string s,s1;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>s;
	    int f=0;
	    for(int i=1;i<n;i++){
	        cin>>s1;
	        if(s=="cookie" && s1!="milk")
	            f=1;
	        s=s1;   
	    }
	   
	    if(f==1 || (n==1 && s=="cookie") || s1=="cookie")
	        cout<<"NO"<<endl;
	   else
	        cout<<"YES"<<endl;
	}
	return 0;
}