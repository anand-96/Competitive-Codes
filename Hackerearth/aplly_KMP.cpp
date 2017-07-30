    #include<iostream>
    #include<vector>
    #include<cstring>
     
    using namespace std ;
     
    vector<int> prefix_function (string Z) {
     
        int n = (int) Z.length();
     
        vector<int> F (n);
     
         F[0]=0;
     
        for (int i=1; i<n; ++i) {
     
            int j = F[i-1];
     
            while (j > 0 && Z[i] != Z[j])
     
                j = F[j-1];
     
            if (Z[i] == Z[j])  ++j;
     
            F[i] = j;
     
        }
     
        return F;
     
    }
     
     
    int main(){
    vector<int>F;
    string S;
    string P,z;
    cin>>P;
    cin>>S;
    int l=P.size(),c=0;
    z=P+"#"+S;
    F=prefix_function(z);
    for(int i=0;i<F.size();i++){
    	if(F[i]==l)
    		c++;
    }
    cout<<c<<endl;
    return 0 ;
    }
