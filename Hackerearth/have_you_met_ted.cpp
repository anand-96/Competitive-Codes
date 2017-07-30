    #include <iostream>
    using namespace std;
     
    int mn=2e9;
    int setbits(int n){
    	int count=0;
    	while(n){
    		n=n&(n-1);
    		count++;
    	}
    	return count;
    }
    int main()
    {
    	int t,n,x;
    	cin>>t;
    	while(t--){
    		mn=2e9;
    		cin>>n;
    		for(int i=0;i<n;i++){
    			cin>>x;
    			mn=min(mn,setbits(x));
    		}
    		cout<<mn<<endl;
    	}
        return 0;
    }
