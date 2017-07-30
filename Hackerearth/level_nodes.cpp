    #include <iostream>
    #include <vector>
    #include <queue>
     
    using namespace std;
     
    vector <int> v[100005] ;   //Vector for maintaining adjacency list explained above
        int level[100005]; //To determine the level of each node
        bool vis[100005]; //Mark the node if visited 
        void bfs(int s) {
            queue <int> q;
            q.push(s);
            level[ s ] = 1;  //Setting the level of the source node as 0
            vis[ s ] = true;
            while(!q.empty())
            {
                int p = q.front();
                q.pop();
                for(int i = 0;i < v[ p ].size() ; i++)
                {
                    if(vis[ v[ p ][ i ] ] == false)
                    {
                //Setting the level of each node with an increment in the level of parent node
                        level[ v[ p ][ i ] ] = level[ p ]+1;                 
                         q.push(v[ p ][ i ]);
                         vis[ v[ p ][ i ] ] = true;
          }
                }
            }
        }
    int main()
    {
    	int n,x,y,c=0;
    	cin>>n;
    	for(int i=1;i<n;i++){
    		cin>>x>>y;
    		v[x].push_back(y);
    		v[y].push_back(x);
    	}
    	cin>>x;
    	bfs(1);
    	for(int i=1;i<=n;i++){
    		if(level[i]==x)
    			c++;
    	}
        cout << c << endl;
        return 0;
    }
