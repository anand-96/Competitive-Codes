    #include <iostream>
    using namespace std;
     
    int main()
    {
       	int arr[1001][1001]={0},n,m,a,b,q;
       	cin>>n>>m;
       	while(m--){
       		cin>>a>>b;
       		arr[a][b]=1;
       		arr[b][a]=1;
       	}
       	cin>>q;
       	while(q--){
       		cin>>a>>b;
       		if(arr[a][b]==1)
       			cout<<"YES"<<endl;
       		else
       			cout<<"NO"<<endl;
       	}
        return 0;
    }
