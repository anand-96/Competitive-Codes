    #include <iostream>
    #include <set>
    using namespace std;
     
    int main()
    {
        int t,n,x,y;
        set <int>s;
        cin>>t;
        while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
             cin>>x>>y;
             s.insert(x);
             s.insert(y);
        }
        cout<<s.size()<<endl;
        s.clear();
        }
        return 0;
    }
