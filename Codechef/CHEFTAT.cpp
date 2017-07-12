#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int T;
    int n,j;
    cin>>T;
    while(T--){
        cin>>n;
        long long int A[n+1],B[n+1];
        long long int max=0;
        int c=0,flag=-1;
        for(int i=1;i<=n;i++){
                cin>>B[i];
                max+=B[i];
            }
        for(int i=1;i<=n;i++){
                cin>>A[i];
                max+=A[i];
            }
        max/=n;
	      if(n==1){
                cout<<A[1]+B[1]<<endl;
                continue;
            }

		for(int k=1;k<=n;k++){
		 	if(A[k]==max){
				c++;
				continue;	
			}
			else if(k!=1 && (A[k]+B[k-1])==max){
			  	c++;
				continue;
			}
			else if((A[k]+B[k])==max){
			  	c++;
				continue;
			}
			else if(k!=n && (A[k]+B[k+1])==max){
			  	c++;
				continue;
			}
			else if(k!=1 && (A[k]+B[k-1]+B[k])==max){
			  	c++;
				continue;
			}
			else if(k!=n && (A[k]+B[k]+B[k+1])==max){
			  	c++;
				continue;
			}
			else if(k!=1 && k!=n && (A[k]+B[k-1]+B[k+1])==max){
			  	c++;
				continue;
			}
			else if(k!=1 && k!=n && (A[k]+B[k-1]+B[k]+B[k+1])==max){
			  	c++;
				continue;
			}
			else{
				break;
			}
		}
		if(c>=n){
			cout<<max<<endl;	
		}else{
		    cout<<"-1"<<endl;
		}
    }
	return 0;
}
