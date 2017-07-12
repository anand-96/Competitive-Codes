#include <iostream>
using namespace std;

int main(){
	int n,k,ans,c=0;
	cin>>n>>k;
	ans=240-k;
	for(int i=1;i<=n;i++){
		if((ans-5*i)>=0){
			c++;
			ans=ans-5*i;
		}
		//cout<<c<<"--"<<ans<<endl;
	}
	cout<<c<<endl;
}