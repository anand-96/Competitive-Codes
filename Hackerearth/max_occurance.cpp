        #include <iostream>
        using namespace std;
        #include <map>
        map<char,int>mp;
         
        int main()
        {
            string s;
            getline(cin,s);
            for(int i=0;i<s.size();i++){
                mp[s[i]]++;
            }
            int ma=0;
            char c='z';
            map<char,int>::iterator it=mp.begin();
            for(;it!=mp.end();it++){
                if(it->second>ma){
                    ma=it->second;
                    c=it->first;
                }
                else if(it->second==ma)
                        c=min(c,it->first);
        
               // cout<<it->first<<"--"<<it->second<<endl;
            }
            cout<<c<<" "<<ma<<endl;
            return 0;
        }
