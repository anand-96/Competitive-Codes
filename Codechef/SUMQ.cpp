        #include <iostream>
        #include <algorithm>
        #include <map>
        using namespace std;
        #define l long int
        #define ll long long int
        #define mod 1000000007
        int main(){
            l t,p,q,r;
            cin>>t;
            while(t--){
                cin>>p>>q>>r;
                ll A[p],B[q],C[r],x=0,z=0;
                ll max1=-1;
                for(l i=0;i<p;i++){
                    cin>>A[i];
                }
                for(l i=0;i<q;i++){
                    cin>>B[i];
                }
                for(l i=0;i<r;i++){
                    cin>>C[i];
                }
                sort(A,A+p);
                sort(B,B+q);    
                sort(C,C+r);
                ll s1=0,s2=0,j=0,k=0;
                
                for(l i=0;i<p;i++){
                    if(A[i]<=B[0]){
                        x+=A[i];
                        j++;
                    }
                    else
                        break;
                }
                    
                for(l i=0;i<r;i++){
                    if(C[i]<=B[0]){
                        z+=C[i];
                        k++;
                    }else{
                        break;
                    }
                }
                

                ll ans1=0,ans2=0,ans=0;

                ans+=((x+j*B[0])*(z+k*B[0]))%mod;
             //   cout<<x<<"--"<<j<<"--"<<endl;
            //    cout<<z<<"--"<<k<<endl;
                
                for(ll i=1;i<q;i++){
                    ans1=0,ans2=0;
                    for(;A[j]<=B[i] && j<p;j++){
                        x+=A[j];
                    }
                    
                    ans1=(x+j*B[i]);
                    ans1=ans1%mod;
                    
                    if(ans1==0)
                        continue;
                              
                    for(;C[k]<=B[i] && k<r;k++){
                        z+=C[k];
                    }
            
                    ans2=(z+B[i]*k);
                    ans2=ans2%mod;
            
                   // cout<<x<<"--"<<j<<"--"<<ans1<<endl;
                //    cout<<z<<"--"<<k<<"--"<<ans2<<endl;
              
                    ans+=(ans1*ans2)%mod;  
                  //  cout<<ans<<endl;
                }
                ans=ans%mod;               
                cout<<ans<<endl;
                
            }
        	return 0;
        }
          