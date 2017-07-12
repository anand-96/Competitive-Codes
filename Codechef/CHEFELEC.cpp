#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
 
int main() {
    int t;
    long int n,temp;
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        long int arr[n],c=0,j,k,l;
        int flag=0;
   if(n<=1000){
        for(long int i=0;i<n;i++){
                cin>>arr[i];
                if(str[i]=='0' && flag==0){
                    j=i;
                    flag=1;
                }
                if(str[i]=='1' && flag==1){
                    flag=2;
                    k=i;
                }
            }
            if(flag==1){
                    for(long int i=j;i<n;i++){
                        c+=arr[i]-arr[i-1];
                    }
                    cout<<c<<endl;
                    continue;
            }
            else if(flag==0){
                cout<<"0"<<endl;
                continue;
            }
        while(j<n && k<n){
            if(flag==1){
                for(long int i=j;i<n;i++){
                    c+=arr[i]-arr[i-1];
                    }
                break;
            }
            if(j==0){
                for(long int i=k;i>0;i--){
                    c+=(arr[i]-arr[i-1]);
                }
            //    cout<<c<<endl;
                j=k+1;
                flag=0;
            }
            else if((arr[j]-arr[j-1])<=(arr[k]-arr[k-1])){
                c+=(arr[j]-arr[j-1]);
          //      cout<<c<<endl;
                flag=0;
                j++;
                }
            else{
                c+=(arr[k]-arr[k-1]);
        //        cout<<c<<endl;
                k--;
                flag=2;
                str[k]=1;
                }
            if(flag==0 && j<=k){
                    for(long int i=j;i<n;i++,j++){
                        if(str[i]=='0'){
                            j=i;
                            break;
                        }
                    }
                }
            if(j>=k && j<n && k<n)
            {
                flag=0;
                for(long int i=j;i<n;i++){
                if(str[i]=='0' && flag==0){
                    j=i;
                    flag=1;
                    }
                if(str[i]=='1' && flag==1){
                    flag=2;
                    k=i;
                    }
                }
                if(flag==0)
                 break;
            }
 
        }
        cout<<c<<endl;
        }
        else{
       	   for(long int i=0;i<n;i++){
                cin>>arr[i];
                if(str[i]=='0' && flag==0){
                    j=i;
                    flag=1;
                }
                if(str[i]=='1' && flag==1){
                    flag=2;
                    k=i;
                }
            } 
            l=k;
        if(j==0){
            for(long int i=k;i>0;i--){
                c+=(arr[i]-arr[i-1]);
            }
            j=l+1;
            k=l+1;
        }
        else if(j==(n-1)){
            cout<<(arr[j]-arr[j-1])<<endl;
            continue;
        }
        else if(flag==1){
            for(long int i=j;i<n;i++){
                c+=(arr[i]-arr[i-1]);
            }
            cout<<c<<endl;
            continue;
        }
        else if(flag==0){
            cout<<"0"<<endl;
            continue;
        }
        
        while(j<n && k<n){
          if(j==k){
             flag=0;
            for(long int i=l+1;i<n;i++){ 
                if(str[i]=='0' && flag==0){
                    j=i;
                    flag=1;
                }
                if(str[i]=='1' && flag==1){
                    flag=2;
                    k=i;
                }
                if(flag==2)
                    break;
            }
                    if(flag==1){
                            for(long int i=j;i<n;i++){
                                c+=(arr[i]-arr[i-1]);
                            }
                            break;
                        } 
                    else if(flag==0){
                        break;
                       }
                l=k;
         }  
        else if((arr[j]-arr[j-1])<=(arr[k]-arr[k-1])){
             c+=(arr[j]-arr[j-1]);
             str[j]=1;
             j++;
         }
         else{
             c+=(arr[k]-arr[k-1]);
             k--;
             str[k]=1;
         }
       }
        cout<<c<<endl;
       	} 
    }
	return 0;
} 