    #include <iostream>
    #include <map>
    #include <set>
    using namespace std;
    map<long int,long int>mp;
    set<long int>ss;
    int main()
    {
        string s;
        long int q,x;
        cin>>q;
        set<long int>::iterator it;
        map<long int,long int>::iterator i,j;
        while(q--){
            cin>>s;
            if(s=="CountHigh"){
                it=ss.begin();
                if(it!=ss.end()){
                   // cout<<*(--ss.end());
                    cout<<mp[*(--ss.end())]<<endl;
                }else
                    cout<<"-1"<<endl;
            }
            else if(s=="Push"){
                cin>>x;
                mp[x]++;
                ss.insert(x);
            }
            else if(s=="Diff"){
                it=ss.begin();
                if(it!=ss.end()){
                cout<<(*(--ss.end())-*ss.begin())<<endl;
                i=mp.find(*(--ss.end()));
                j=mp.find(*ss.begin());
                i->second=i->second-1;
                j->second=j->second-1;
             //   cout<<i->second<<"---"<<j->second<<endl;
                if(j->second<=0 && (ss.begin()!=ss.end())){
                    ss.erase(ss.begin());
                    mp.erase(j->first);
                }
                if(i->second<=0 && (ss.begin()!=ss.end())){
                    ss.erase(--ss.end());
                    mp.erase(i->first);
                    }
                }else{
                    cout<<"-1"<<endl;
                }
            }
            else if(s=="CountLow"){
                it=ss.begin();
                if(it!=ss.end()){
                 //   cout<<*it;
                    cout<<mp[*it]<<endl;
                }else
                    cout<<"-1"<<endl;
            }
        }
        return 0;
    }
