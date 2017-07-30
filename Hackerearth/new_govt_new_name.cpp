    #include <iostream>
    #include <map>
    using namespace std;
     
     
    int main()
    {
        int n,q,type,x;
        string str;
        char ch;
        int a[28]={0};
        cin>>n>>q;
        cin>>str;
        for(int i=0;i<n;i++){
            a[str[i]-65]++;
        }
        while(q--){
            cin>>type;
            if(type==1){
                cin>>x>>ch;
                a[str[x-1]-65]--;
                a[ch-65]++;
                str[x-1]=ch;
            }else{
                cin>>x;
                int k=0,i;
                for(i=0;i<27;i++){
                    if(k>=x)
                        break;
                        k+=a[i];
                }
                printf("%c\n",'A'+i-1);
            }
        }
        return 0;
    }
