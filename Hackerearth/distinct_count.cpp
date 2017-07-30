    #include <iostream>
    #include <set>
    using namespace std;
    #define ll long int
    int main()
    {
       int t,n,x;
       ll a;
       set<ll> s;
       cin>>t;
       while(t--){
       		cin>>n>>x;
       		while(n--){
       			cin>>a;
       			s.insert(a);
       		}
       		if(s.size()==x)
       			cout<<"Good"<<endl;
       		else if(s.size()>x){
       			cout<<"Average"<<endl;
       		}else{
       			cout<<"Bad"<<endl;
       		}
       		s.clear();
       }
        return 0;
    }
