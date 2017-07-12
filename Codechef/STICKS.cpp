                    #include <iostream>
                    #include <cstring>
                    #include <algorithm>
                    using namespace std;
                    int main() {
                        int t,n,k,i; 
                    	cin>>t;
                    	while(t--){
                            cin>>n;
                            int arr[n],c=0;
                            for(i=0;i<n;i++)
                                cin>>arr[i];
                            sort(arr,arr+n);
                            for(i=n-1;i>=0;){
                               if(arr[i]==arr[i-1]){
                                   c++;
                               if(c==2)
                                  break;
                                   k=arr[i];
                                i-=2;
                               }
                               else
                                  i--;
                            }
                            if(c==2)
                            cout<<k*arr[i]<<endl;
                            else
                            cout<<"-1"<<endl;
                    	}
                    	return 0;
                    }      