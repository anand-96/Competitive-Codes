    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    vector<long int>vec;
    int main()
    {
        long int k,n,q,x;
        char ch;
        cin>>n;
        for(long int i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        cin>>q;
        while(q--){
            cin>>k>>ch;
            if(ch=='L'){
                cout<<vec[n-k]<<endl;
            }else{
                cout<<vec[k-1]<<endl;
            }
        }
        return 0;
    }
