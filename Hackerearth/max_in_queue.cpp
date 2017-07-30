    #include <iostream>
    #include <set>
    using namespace std;
     
    int main()
    {
    	long int x,ma=-1;
    	int n,q;
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>x;
    		ma=max(ma,x);
    	}
    	cin>>q;
    	while(q--){
    		int type;
    		cin>>type;
    		if(type==1){
    			cin>>x;
    			ma=max(ma,x);
    		}else{
    			cout<<ma<<endl;
    		}
    	}
        return 0;
    }
