#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;



int main() {
	int t;
	long long int m,n;
	cin>>t;
	while(t--){
	    	cin>>m;
	    	long long int X[m];
	        for(int i=1;i<=m;i++){
                cin>>X[i];
             }
            cin>>n;
            long long int Y[n];
            for(int i=1;i<=n;i++){
                cin>>Y[i];
              }

            long long int c[m][n];
            c[0][0]=0;
            for(int i=0;i<=m;i++)
                c[0][i+1]=0;

            for(int i=0;i<=n;i++)
                c[i+1][0]=0;

            for(int i=1;i<=m;i++){
                for(int j=1;j<=n;j++){
                    if(X[i]==Y[j]){
                        c[i][j]=c[i-1][j-1]+1;
                    }
                    else if(c[i-1][j]>=c[i][j-1]){
                        c[i][j]=c[i-1][j];
                    }
                    else{
                        c[i][j]=c[i][j-1];
                    }
                }
            }

            if(c[m-1][n-1]==n)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
	return 0;
}
