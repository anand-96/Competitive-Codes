    #include <iostream>
    using namespace std;
     
    int main()
    {
        int t,n;
        long int s=0,x;
        cin>>t;
        while(t--){
            cin>>n;
            s=0;
            for(int i=0;i<n;i++){
                cin>>x;
                s+=x;
            }
            for(int i=0;i<n;i++){
                cin>>x;
                s-=x;
            }
            if(s==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        return 0;
    }
