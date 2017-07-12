#include <cstring>
#include <iostream>
using namespace std;

int s[2502][2502]={0};
int main() {
    int t,n,k,len,x;
    cin>>t;
    while(t--){
        memset(s,0,sizeof(s[0][0])*2502*2502);
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>len;
            for(int j=0;j<len;j++){
                cin>>x;
                s[i][x]=1;
            }
        }
        
        int c=0,flag=0;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                flag=0;
                for(int p=1;p<=k;p++){
                    if(s[i][p]==1 || s[j][p]==1)
                        continue;
                    else{
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    c++;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}
