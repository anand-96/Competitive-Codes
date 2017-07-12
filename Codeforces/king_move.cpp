#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    if((str[0]=='a' && (str[1]=='1'||str[1]=='8')) || (str[0]=='h' && (str[1]=='1'||str[1]=='8')) || (str[0]=='8' && (str[0]=='a'||str[0]=='h')) || (str[1]=='1' && (str[0]=='a'||str[0]=='h')))
        cout<<"3"<<endl;
    else if((str[0]=='a' && (str[1]!='1' && str[1]!='8')) || (str[0]=='h' && (str[1]!='1' && str[1]!='8')) || (str[1]=='8' && (str[0]!='a'||str[0]!='h')) || (str[1]=='1' && (str[0]!='a' && str[0]!='h')))
        cout<<"5"<<endl;
    else if((str[0]!='a' && str[0]!='h' && str[1]!='1' && str[1]!='8'))
        cout<<"8"<<endl;
	return 0;
}
