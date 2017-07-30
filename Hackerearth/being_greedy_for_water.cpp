    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    int main()
    {
    	int t,n;
    	cin>>t;
    	while(t--){
    		cin>>n;
    		long int arr[n],x,c=0;
    		cin>>x;
    		for(int i=0;i<n;i++)
    			cin>>arr[i];
    		sort(arr,arr+n);
    		for(int i=0;i<n;i++){
    			if(x>=arr[i])
    				x-=arr[i],c++;
    			else
    				break;
    		}
    		cout<<c<<endl;
    	}
        return 0;
    }
