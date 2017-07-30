    #include <iostream>
    #include <vector>
    using namespace std;
     int c=0,t;
     vector<int>vec[100005];
        int visited[100005];
     
        void dfs(int s,int size) {
            visited[s] = 1;
            for(int i = 0;i < vec[s].size();++i)    {
             if(visited[vec[s][i]] == 0){
                t=vec[vec[s][i]].size()-1;
                if(t>size)
                    c++;
                 dfs(vec[s][i],t);
             }
            }
        return; 
        }
        
    int main()
    {
        int n,m,x,y;
        cin>>n>>m;
     
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            vec[x].push_back(y);
            vec[y].push_back(x);
         }
        if(m==0)
            cout<<"0"<<endl;
        else{
            for(int i = 1;i <= n;++i) {
             if(visited[i] == 0)     {
                 dfs(i,vec[i].size());
                }
            }
        cout<<c<<endl;
        }
        return 0;
    }
