#include <iostream>
using namespace std;
#define ll long long int
int main() {
    ll t,c,d,l,k;
    cin>>t;
    while(t--){
        cin>>c>>d>>l;
        if(l%4==0){
            l=l/4;
            if(l>=d){
                l=l-d;
                if(c>=l){
                    c=c-l;
                    d=2*d;
                    if(c<=d)
                        cout<<"yes"<<endl;
                    else
                        cout<<"no"<<endl;
                }
                else
                    cout<<"no"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
        else
            cout<<"no"<<endl;
    }
	return 0;
}
