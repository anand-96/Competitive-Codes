#include <iostream>
using namespace std;

int main() {
	
	int n,count=0;
	long long int x,d;
	char ch;
	cin>>n>>x;
	for(int i=0;i<n;i++){
	    cin>>ch>>d;
	    if(ch=='+'){
	        x+=d;
	    }
	    else{
	        if(d<=x){
	            x=x-d;
	        }
	        else{
	            count++;
	        }
	    }
	}
	cout<<x<<" "<<count;
	return 0;
}
