     #include <iostream>
       #include <vector>
        using namespace std;
     
        vector <int> adj[100005];
        bool visited[100005];
        long int c=0;
        void dfs(int s) {
            visited[s] = true;
            for(int i = 0;i < adj[s].size();++i)    {
             if(visited[adj[s][i]] == false){
                c++;
                 dfs(adj[s][i]);
             }
            }
        }
     
        int main() {
            int nodes, edges, x, y,ans = 1;
            cin >> nodes;                       //Number of nodes
            cin >> edges;                       //Number of edges
            for(int i = 0;i < edges;++i) {
             cin >> x >> y;     
         //Undirected Graph 
             adj[x].push_back(y);                   //Edge from vertex x to vertex y
             adj[y].push_back(x);                   //Edge from vertex y to vertex x
            }
     
            
            for(int i = 1;i <= nodes;++i) {
             if(visited[i] == false)     {
                 dfs(i);
         //    cout<<c<<endl;
             ans=(ans*(c+1))%(1000000007);
             c=0;
             }
            }
            cout << ans << endl;
            return 0;
        }


