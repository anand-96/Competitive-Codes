    #include <iostream>
    using namespace std;
     
    int main()
    {
        string s;
        cin>>s;
        if(s[0]=='?' && s.size()>1){
            if(s[1]=='a')
                s[0]='b';
            else
                s[0]='a';
        }
            
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='?'){
                if(s[i+1]=='a' && s[i-1]=='a')
                    s[i]='b';
                else if(s[i+1]=='b' && s[i-1]=='b')
                    s[i]='a';
                else if(s[i-1]=='a')
                    s[i]='b';
                else if(s[i-1]=='b' && s[i+1]!='a')
                    s[i]='a';
                else 
                    s[i]='b';
            }
        }
        
        if(s[s.size()-1]=='?' && s.size()-2>0){
            if(s[s.size()-2]=='a')
                s[s.size()-1]='b';
            else
                s[s.size()-1]='a';
        }
        
        cout<<s<<endl;
        return 0;
    }
