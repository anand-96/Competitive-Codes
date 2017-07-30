    #include <iostream>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    using namespace std;
    #define ll long long
     
    int n,M,a,b;
    unsigned int c = 0;
    unsigned int num() {
    	c=c*a+b;
    	unsigned int r=(c>>8);
    	c=c%M;
    	return r;
    }
     
    int main() {
    	cin>>n>>M;
    	cin>>a>>b;
    	long long ans=0;
    	int l=(int)num();
    	for (int i=2;i<=n;i++){
    		int n=(int)num();
    		if (l<n) {
    			ans+=(n-l);
    		}
    		 l=n;
    	}
    	cout << ans << endl;
    	return 0;
    }
