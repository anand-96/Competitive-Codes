    #include <iostream>
    using namespace std;
     
    int main()
    {
    	long long int t,m,p,ans;
    	cin>>t;
    	while(t--){
    		cin>>m>>p;
    		int c=0;
    		ans=m^p;
    		while(ans){
    			ans=ans&(ans-1);
    			c++;
    		}
    		cout<<c<<endl;
    	}
        return 0;
    }
