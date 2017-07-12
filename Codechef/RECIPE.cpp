                    #include <iostream>
                    #include <cstring>
                    #include <algorithm>
                    using namespace std;
                    int main() {
                        int t,n,k,i,j; 
                    	cin>>t;
                    	while(t--){
                            cin>>n;
                            int arr[n],c=0,max=-1;
                            for(i=0;i<n;i++){
                                cin>>arr[i];
                                if(max<arr[i])
                                    max=arr[i];
                            }
                            for(i=max;i>=1;i--){
                                for(j=0;j<n && arr[j]%i==0;j++);
                                if(j==n)
                                    break;
                            }
                            for(j=0;j<n;j++)
                                cout<<arr[j]/i<<" ";
                            cout<<endl;
                    	}
                    	return 0;
                    }      