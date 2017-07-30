    #include <iostream>
    #include <map>
    #include <set>
    using namespace std;
    #define l long int
     
    int main()
    {
    	int t;
    	l n;
    	string x;
    	set<int> s;
    //	set<string>::iterator it;
    //	map<string,int> mp;
    	cin>>t;
    	while(t--){
    		cin>>n;
    		l arr[n];
    		for(int i=0;i<n;i++){
    			cin>>arr[i];
    //			mp[x]=mp[x]+1;
    			s.insert(arr[i]);
    		}
    		int c=0,k=1;
    		for(l i=1;i<n;i++){
    			if(arr[i]==arr[i-1])
    				k++;
    			else{
    				c+=(k*(k+1)/2-k);
    				k=1;
    			}
    		}
    		cout<<c+n<<endl;
    	}
        return 0;
    }
