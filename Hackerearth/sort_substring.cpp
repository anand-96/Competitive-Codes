    #include <iostream>
    #include <algorithm>
    #include <string>
    using namespace std;
     
    int main()
    {
        int t,n,m;
        string s,str="",x;
        cin>>t;
        while(t--){
        	cin>>s>>n>>m;
        	str="";
        	for(int i=0;i<n;i++)
        		str+=s[i];
        		x=s.substr(n,m-n+1);
    	    	sort(x.begin(), x.end(),greater<char>());
    	    	str+=x;
    	    for(int i=m+1;i<s.size();i++)
        		str+=s[i];
        	cout<<str<<endl;
        }
        
        return 0;
    }
