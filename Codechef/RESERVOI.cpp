#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
int c=0,t,k=0;
    
    int main()
    {
        int t,n,m;
        cin>>t;
        while(t--){
            cin>>n>>m;
            char arr[n+2][m+2];
        memset(arr, '0', sizeof(arr[0][0]) * (m+2) * (n+2));
        for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cin>>arr[i][j];
              //      cout<<arr[i][j];
                }
            //    cout<<endl;
            }
            
            int flag=0;
            for(int i=1;i<=n;i++){
                if(arr[i][1]=='W' || arr[i][m]=='W'){
                    flag=1;
                    break;
                }
            }
            
        
        if(!flag){
            for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        if(arr[i][j]=='B' && (arr[i+1][j]=='W' || arr[i+1][j]=='A')){
                            flag=1;
                            break;
                        }
                        else if(arr[i][j]=='W' && (arr[i-1][j]=='B' || arr[i][j-1]=='A' || arr[i][j+1]=='A' || arr[i+1][j]=='A')){
                                flag=1;
                                break;
                        }
                        else if(arr[i][j]=='A' && (arr[i-1][j]=='W' || arr[i-1][j]=='B' || arr[i][j-1]=='W' || arr[i][j+1]=='W' )){
                                flag=1;
                                break;
                        }
                    }
                }
        }
            if(flag==1)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
            }
       return 0;
    }
     