#include <iostream>
using namespace std;

int main() {
    int t;
    long int n,m,c,x;
    cin>>t;
    while(t--){
        int a=0;
        cin>>n>>m>>c;
        for(long int i=1;i<=min(n,m);i++){
                if(c%i==0)
                 x=c/i;
                else
                continue;
                if(x<=max(n,m))
                  a++;
            }
        cout<<a<<endl;
        }
	return 0;
}
