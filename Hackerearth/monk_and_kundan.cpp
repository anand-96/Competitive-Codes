    #include <iostream>
    #include <map>
    #include <cstring>
    using namespace std;
    map<char,int>mp;
    int main()
    {
        int t,flag=0;
        int ans=0,x;
        for(int i=0;i<26;i++)
            mp['a'+i]=i;
        for(int i=26;i<35;i++)
            mp['1'+i-26]=i;
        for(int i=36;i<62;i++)
            mp['A'+i-36]=i;
            
            mp['0']=35;
        map<char,int>::iterator it;
      //  for(it=mp.begin();it!=mp.end();it++)
    //      cout<<it->first<<"--"<<it->second<<endl;
        string s;
        cin>>t;
        t++;
        while(t--){
        ans=0;
         x=0;
         s="";
     //   cin.ignore();
        getline(cin,s);
        //cout<<s<<endl;
        for(int i=0,k=0;i<s.size();i++){
            if(s[i]==' '){
                k=0;
                x++;
                continue;
            }
            it=mp.find(s[i]);
            ans+=(it->second+k);
            k++;
        }
        x++;
        if(flag==1)
        cout<<(ans*x)<<endl;
        flag=1;
        }
        return 0;
    }
