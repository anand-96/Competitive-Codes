#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
int arr[101];
     
    int main() {
        int N,K;
        long long int A,i;
            cin>>A>>N>>K;
              for(int j=1;j<=K;j++){
                  cout<<A%(N+1)<<" ";
                  A=A/(N+1);
                  }
       	return 0;
    }       