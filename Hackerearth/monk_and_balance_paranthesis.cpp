    #include <iostream>
    using namespace std;
    #define ll long int
    ll top=0,arr[200004];
    void push(ll x){
    	arr[++top]=x;
    }
     
    ll pop(){
    	return arr[top--];
    }
    int main()
    {
    	ll n,x,c=0,k=0,p;
    	cin>>n;
    	arr[0]=0;
    	for(ll i=0;i<n;i++){
    		cin>>x;
    		p=pop();
    		
    		if(p>x && (p==abs(x) || x==abs(p))){
    			k+=2;
    		}else{
    			top++;
    			push(x);
    		}
    //		cout<<top<<endl;
    	c=max(c,k);
    	}
    	if(pop()==0)
    		c=max(c,k);
    	cout<<c<<endl;
        return 0;
    }
