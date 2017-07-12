            #include <iostream>
            #include <cmath>
            #include <algorithm>
            using namespace std;
            
            int main() {
                int t,n,m,k;
                cin>>t;
                while(t--){
                    cin>>n>>m>>k;
                    if(n<m)
                       cout<<m-min(n+k,m)<<endl;
                    else
                       cout<<n-min(m+k,n)<<endl;
                    }
            	return 0;
}