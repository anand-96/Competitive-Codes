    #include<iostream>
    #include <map>
    #include <set>
    using namespace std;
    int main()
    {
    	long int t,n;
    	long int s;
    	map<long int,long int> mp;
    	cin>>t;
    	while(t--){
    		cin>>n;
    		for(long int i=0;i<n;i++){
    			cin>>s;
    			mp[s]+=1;
    		}
    	map<long int,long int>::iterator it;
    	it=mp.begin();
    //	cout<<it->second<<endl;
    	if(it->second%2!=0)
    		cout<<"Lucky"<<endl;
    	else
    		cout<<"Unlucky"<<endl;
    	mp.clear();
    	}
        return 0;
    }


