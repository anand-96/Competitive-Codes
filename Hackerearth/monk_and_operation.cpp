    #include <iostream>
    using namespace std;
    #define ll long long int
    int main()
    {
    	int n,m;
    	cin>>n>>m;
    	ll arr[n+1][m+1];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin>>arr[i][j];
    		}
    	}
    	ll v1,v2,v3,v4;
    	cin>>v1>>v2>>v3>>v4;
    	ll maxrsum=0,maxcsum=0,sumr=0,sumrval=0,sumval=0,sumc=0,sumcval=0;
    	for(int i=0;i<n;i++){
    		 sumr=sumrval=sumval=0;
    		for(int j=0;j<m;j++){
    			sumr+=abs(arr[i][j]);
    			sumrval+=abs(arr[i][j]+v1);
    			sumval+=abs(v2);
    		}
    		maxrsum+=max(sumr,max(sumrval,sumval));
    	}
    	
    	for(int i=0;i<m;i++){
    		 sumc=sumcval=sumval=0;
    		for(int j=0;j<n;j++){
    			sumc+=abs(arr[j][i]);
    			sumcval+=abs(arr[j][i]+v3);
    			sumval+=abs(v4);
    		}
    	maxcsum+=max(sumc,max(sumcval,sumval));
    	} 
    	
        cout << max(maxrsum,maxcsum) << endl;
        return 0;
    }
