    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long int
    int main(){
      vector< pair<int,int> >vec[10005];
      int n,m,k,x,y,val[10005];
      cin>>n>>m>>k;
      for(int i=1;i<=n;i++){
    	cin>>val[i];
    	}
      for(int i=1;i<=m;i++){
    	cin>>x>>y;
    	vec[x].push_back(make_pair(val[y],y));
    	vec[y].push_back(make_pair(val[x],x));
    	}
             for(int i=1;i<=n;i++){
    	sort(vec[i].begin(),vec[i].end());
    	if(vec[i].size()>=k)
    	   cout<<vec[i][vec[i].size()-k].second<<endl;
    	else
    	   cout<<"-1"<<endl;
    	}
    	return 0;
    }
