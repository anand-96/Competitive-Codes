    #include <iostream>
    #include <vector>
    using namespace std;
    vector<int>arr(27);
     
    int main()
    {
        int t;
        string s;
        cin>>t;
        while(t--){
            cin>>s;
            for(int i=0;i<s.size();i++){
                arr[s[i]-97]++;
            }
            int i;
            for(i=0;i<27;i++){
                if(arr[i]>=2)
                    break;
            }
            if(i==27)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
            fill(arr.begin(),arr.end(),0);
        }
        return 0;
    }
