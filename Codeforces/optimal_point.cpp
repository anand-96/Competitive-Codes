#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int n;
    cin>>n;
    long long int arr[n];
    for(long int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n%2==0)
         n/=2;
    else
         n=(n+1)/2;
    cout<<arr[n-1]<<endl;
	return 0;
}