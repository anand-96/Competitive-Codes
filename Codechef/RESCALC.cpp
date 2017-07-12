  #include <iostream>
    #include <set>
    #include <vector>
    using namespace std;
     
    int main(){
        int t,n,b,c,a,k,max=-1,temp;
        vector <int> vec;
    	cin>>t;
    	while(t--){
    	    cin>>n;
    	        max=-1;
    	    for(int i=1;i<=n;i++){
    	         b=0;
    	        cin>>c;
    	        int count[7]={0};
    	        for(int j=0;j<c;j++){
    	            cin>>temp;
    	            count[temp]++;
    	        }
    	      //  cout<<endl;
    	        int l=0;
    	        a=0;
    	        while(count[1]>0 || count[2]>0 || count[3]>0 || count[4]>0 || count[5]>0 || count[6]>0){
    	            l=0;
    	            if(count[1]>0)    l++;
    	            if(count[2]>0)    l++;
    	            if(count[3]>0)    l++;
    	            if(count[4]>0)    l++;
    	            if(count[5]>0)    l++;
    	            if(count[6]>0)    l++;
    	            if(l==6){
    	              a+=4;   
    	            }
    	            else if(l==5){
    	                a+=2;
    	            }
    	            else if(l==4){
    	                a+=1;
    	            }
    	            count[1]--;
    	            count[2]--;
    	            count[3]--;
    	            count[4]--;
    	            count[5]--;
    	            count[6]--;
    	        }
    	        a+=c;
                vec.push_back(a);
    	        
    	       if(a>max){
    	           max=a;
    	           k=i;
    	       }
          }
          b=0;
    	   for(int p=0;p<vec.size();p++){
    	       //cout<<vec[p]<<" ";
    	       if(vec[p]==max)
    	            b++;
    	   }
    	    //cout<<endl;
    	    if(b>=2)
                cout<<"tie"<<endl;
            else if(k==1)
                cout<<"chef"<<endl;
            else
                cout<<k<<endl;
            vec.clear();
    	}
    	return 0;
    }    