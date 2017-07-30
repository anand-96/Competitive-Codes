    #include <iostream>
    using namespace std;
     
    int main()
    {
        int n,x,s=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            s+=x;
        }
        s=s/2;
        if(s==(n-1))
            cout << "Yes" << endl;
        else
            cout<<"No"<<endl;
        return 0;
    }
