    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    int main()
    {
    	int t,n;
    	long int z,x[1001];
    	cin>>t;
    	while(t--){
    		cin>>z>>n;
    		for(int i=0;i<n;i++)
    			cin>>x[i];
    		sort(x,x+n);
    		for(int i=0;i<n;i++){
    			z&=x[i];
    			if(z==0){
    				cout<<"Yes"<<endl;
    				break;
    			}
    		}
    		if(z!=0)
    			cout<<"No"<<endl;
    	}
        return 0;
    }
