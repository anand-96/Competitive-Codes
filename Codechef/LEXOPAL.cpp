    #include <iostream>
    #include <string>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while (t--) {
            string a;
            cin>>a;
            string b = "";
            int j = 0,c1=0,c2=0;
     
            int indexa[a.size()]={0};
     
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == '.') {
                    indexa[j] = i;
                    c1++;
                    j++;
                }
                b = b + a[a.size() - 1-i];
            }
     
     
            int indexb[b.size()]={0};
            j = 0;
            for (int i = 0; i < b.size(); i++) {
                if (b[i] == '.') {
                    indexb[j] = i;
                    c2++;
                    j++;
                }
            }
     
            string aChar = a;
            string bChar = b;
            int i = 0;
            while (c1>0 && c2>0) {
                aChar[indexa[i]] = bChar[indexa[i]];
                bChar[indexb[i]] = aChar[indexb[i]];
                i++;
                c1--;
                c2--;
            }
     
            string new_a = aChar;
            string new_b = bChar;
     
            if (new_a==new_b) {
                for(int i=0;i<new_a.size();i++)
                    if(new_b[i]=='.')
                        new_b[i]='a';
                cout<<new_b<<endl;
            } else {
                cout<<"-1"<<endl;
            }
        }
        return 0;
      } 