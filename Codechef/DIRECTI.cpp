#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t,n;
	string temp,s="";
    vector< vector<string> >arr;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<=n;i++){
            arr.push_back(vector<string>());
            getline(cin,temp);
           // cout<<temp.size()<<" "<<temp[temp.size()-1]<<endl;
            s="";
            for(int j=0;j<temp.size();j++){
                if(temp[j]==' ')
                {
                   arr[i].push_back(s);
                   s="";
                   continue;
                }
                s+=temp[j];
            }
             arr[i].push_back(s);
            }
            for(int k=arr.size()-1;k>0;k--){
                if(k!=arr.size()-1){
                    if(arr[k+1][0]=="Right")
                        cout<<"Left ";
                    else
                        cout<<"Right ";
                }
                else
                cout<<"Begin ";
                for(int j=1;j<arr[k].size();j++){
                    cout<<arr[k][j]<<" ";
                }
                cout<<endl;
            }

        arr.clear();
    }
	return 0;
}
