#include <iostream>
using namespace std;

int ncr(int n,int k)
{
    long long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

int main()
{
	int t,n,m;
	string s;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<m;j++){
                arr[i][j]=s[j]-48;
            }
        }
        int sum=0,count=0;
        for(int j=0;j<m;j++){
            count=0;
            for(int i=0;i<n;i++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            if(count>=2)
            sum+=ncr(count,2);
        }
        cout<<sum<<endl;
    }
	return 0;
}
