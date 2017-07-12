#include <iostream>
using namespace std;

int main() {
    int t,n;
    string p;
    cin>>t;
    while(t--){
        cin>>n>>p;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==1){
            if(p=="Dee" && arr[0]%2==0)
                cout<<"Dee"<<endl;
            else
                cout<<"Dum"<<endl;
        }
        else
            cout<<"Dum"<<endl;
    }
	return 0;
}