            #include <iostream>
            #include <vector>
            #include <algorithm>
            using namespace std;
             int c=0,t,k=0;
             vector<int>vec[100005];
             vector<int>a;
                int freq[100005],visited[100005],a1[200005],a2[200005];
                int j,n,e;
                void dfs(int s) {
                    visited[s] = 1;
           //         a.push_back(s);   
                    c++;
                    for(int i = 0;i < vec[s].size();++i)    {
             //           a.push_back(vec[s][i]);
                        if(!visited[vec[s][i]]){
                     //   a.push_back(s);
                        dfs(vec[s][i]);
                        //a.push_back(vec[s][i]);
                            }
                        }
                return; 
                }
                
            int main()
            {
                int x,y;
                cin>>n>>e;
             
                for(int i=1;i<=e;i++){
                    cin>>x>>y;
                    if(k==0)
                    k=x;
                    
                    a1[i]=x;
                    a2[i]=y;
                    vec[x].push_back(y);
                    vec[y].push_back(x);
                    freq[x]++;
                    freq[y]++;
                 }
                c=0;
                dfs(k);
               bool k = 1 ;
               for( int i = 1 ; i <= n ; i++ ) 
                    if( freq[i] & 1 ) 
                        k=0;
               if(k==0 || c!=n || n==1)
                        cout<<"NO"<<endl;
               else {
                    cout<<"YES"<<endl;
                    for(int i=1;i<=e;i++){
                        cout<<a1[i]<<" "<<a2[i]<<endl;
                    }
               }
            return 0;
            }
               