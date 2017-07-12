#include <iostream>
using namespace std;

long int sum(long int n){
    long int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    long int t,n,c=0;
    cin>>n;
    if(n%3!=0){
        cout<<"0"<<endl;
        return 0;
    }
    for(long int i=n-90;i<=n;i++){
        t=sum(i);
        if( (i+t+sum(t) == n) ){
            c++;
        }
    }
    cout<<c<<endl;
	return 0;
}
