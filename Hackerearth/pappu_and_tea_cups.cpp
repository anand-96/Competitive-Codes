        #include <iostream>
        using namespace std;
         
        int main()
        {
            int n,temp,c=0;
            cin>>n;
            int arr[n];
            cin>>arr[0];
            arr[0]==1?temp=1:temp=0;
            for(int i=1;i<n;i++){
                cin>>arr[i];
                if(arr[i]==1 && temp==1){
                    arr[i]=0;
                    temp=0;
                }
                else if(arr[i]==1)
                    temp=1;
                }
            for(int i=0;i<n;i++){
                if(arr[i]==1)
                    c++;
            }
            if(c!=0)
                c++;
            if(c==0)
                cout<<"1"<<endl;
            else if(c%2==0)
                cout<<c/2<<endl;
            else
                cout<<(c/2+1)<<endl;
            return 0;
        }
