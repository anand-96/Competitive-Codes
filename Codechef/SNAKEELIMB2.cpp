        #include <iostream>
        using namespace std;
        #define ll long int
        int main(){
            int t;
            int n,m;
            cin>>t;
            while(t--){
                cin>>n>>m;
                ll arr[n][m],ma=-1;
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        cin>>arr[i][j];
                        ma=max(ma,arr[i][j]);
                    }
                }
                
                int ans=0,k=0,c=0,T[n][m]={0};
                for(int p=0;p<n;p++){
                                for(int q=0;q<m;q++){
                                        T[p][q]=0;
                                        //cout<<T[p][q]<<" ";

                                        if(arr[p][q]==ma)
                                                k++;
                                        }
                   //             cout<<endl;
                        }
                if(k==m*n)
                        cout<<"0"<<endl;
                else{
         
                 while(1){
                    for(int i=0;i<n;i++){
                        for(int j=0;j<m;j++){
                            if(arr[i][j]==ma){
                                if(T[i][j]==0)
                                       T[i][j]=1;
                                if(i-1>=0 && i-1<n && j-1>=0 && j-1<m && T[i-1][j-1]==0){
                                    T[i-1][j-1]=1;
                                }
                                
                                if(i-1>=0 && i-1<n && j>=0 && j<m && T[i-1][j]==0){
                                    T[i-1][j]=1;
                                }
                                
                                if(i-1>=0 && i-1<n && j+1>=0 && j+1<m && T[i-1][j+1]==0){
                                    T[i-1][j+1]=1;
                                }
                                
                                if(i>=0 && i<n && j-1>=0 && j-1<m && T[i][j-1]==0){
                                    T[i][j-1]=1;
                                }
                                
                                if(i>=0 && i<n && j+1>=0 && j+1<m && T[i][j+1]==0){
                                    T[i][j+1]=1;
                                }
                                
                                if(i+1>=0 && i+1<n && j-1>=0 && j-1<m && T[i+1][j-1]==0){
                                    T[i+1][j-1]=1;
                                }
                                
                                if(i+1>=0 && i+1<n && j>=0 && j<m && T[i+1][j]==0){
                                    T[i+1][j]=1;
                                }
                                
                                if(i+1>=0 && i+1<n && j+1>=0 && j+1<m && T[i+1][j+1]==0){
                                    T[i+1][j+1]=1;
                                }
                                
          /*              for(int p=0;p<n;p++){
                                for(int q=0;q<m;q++)
                                        cout<<T[p][q]<<" ";
                                cout<<endl;
                        }
                                cout<<endl<<"ans="<<ans<<endl;
        */
                            }
                            
                        }
                    }
                       c++;                  
                     
        //                 cout<<ans<<c<<endl;
                        k=0;
                        for(int i=0;i<n;i++){
                                for(int j=0;j<m;j++)
                                        if(T[i][j]==1){
                                                arr[i][j]=ma;
                                                k++;
                                                }
                                cout<<endl;
                        }
                        if(k==m*n)
                                break;
                }
                cout<<c<<endl;
                }
            }
            return 0;
        }
