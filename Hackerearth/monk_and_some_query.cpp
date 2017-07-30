    #include <iostream>
    #include <set>
    using namespace std;
     
    int main()
    {
    	int t,n,x;
    	cin>>t;
    	int i=0,flag=0;
    	multiset <int> arr;
    	multiset <int>::iterator it;
    	while(t--){
    		cin>>n;
    		flag=0;
    		if(n==1){
    			cin>>x;
    			arr.insert(x);
    		}
    		else if(n==2){
    			cin>>x;
    			it=arr.find(x);
    			if(it==arr.end())
    				cout<<"-1"<<endl;
    			else
    				arr.erase(it);
    			}
    		else if(n==3){
    			if(!arr.empty())
    			cout<<*arr.rbegin()<<endl;
    			else
    			cout<<"-1"<<endl;
    		}else if(n==4){
    			if(!arr.empty())
    			cout<<*arr.begin()<<endl;
    			else
    			cout<<"-1"<<endl;
    		}
    	}
        return 0;
    }
