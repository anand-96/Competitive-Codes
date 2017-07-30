    #include <iostream>
    using namespace std;
     
    int main()
    {
        string T,S;
        int t;
        cin>>t;
        while(t--){
            cin>>S;
            cin>>T;
            int s2[27]={0},s1[27]={0},s=0;
            for(int i=0;i<S.size();i++){
                s1[S[i]-97]++;
            }
            for(int i=0;i<T.size();i++){
                s2[T[i]-97]++;
            }
            for(int i=0;i<27;i++){
                s+=abs(s1[i]-s2[i]);
            }
            cout<<s<<endl;
        }
        return 0;
    }
