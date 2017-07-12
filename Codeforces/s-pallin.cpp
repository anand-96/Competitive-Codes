#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int i,j;
    cin>>str;
    if(str.size()%2==0){
        i=str.size()/2;
        j=(str.size()-1)/2;
    }
    else{
        i=str.size()/2;
        j=i;
    }
    while(j>=0 && i<str.size()){
        
        if(str[j]=='A' and str[i]=='A')
        {
            i++,j--;
            continue;    
        }
        else if(str[j]=='H' and str[i]=='H'){
            i++,j--;
            continue;
        }
        else if(str[j]=='I' and str[i]=='I'){
            i++,j--;
            continue;
        }
        else if(str[j]=='O' and str[i]=='O'){
            i++,j--;
            continue;
        }
        else if(str[j]=='M' and str[i]=='M'){
            i++,j--;
            continue;
        }
        else if(str[j]=='T' and str[i]=='T'){
            i++,j--;
            continue;
        }
        else if(str[j]=='U' and str[i]=='U'){
            i++,j--;
            continue;
        }
        else if(str[j]=='V' and str[i]=='V'){
            i++,j--;
            continue;
        }
        else if(str[j]=='W' and str[i]=='W'){
            i++,j--;
            continue;
        }
        else if(str[j]=='X' and str[i]=='X'){
            i++,j--;
            continue;
        }
        else if(str[j]=='Y' and str[i]=='Y'){
            i++,j--;
            continue;
        }
        else if(str[j]=='o' and str[i]=='o'){
            i++,j--;
            continue;
        }
        else if(str[j]=='p' and str[i]=='q'){
            i++,j--;
            continue;
        }
        else if(str[j]=='v' and str[i]=='v'){
            i++,j--;
            continue;
        }
        else if(str[j]=='b' and str[i]=='d'){
            i++,j--;
            continue;
        }
        else if(str[j]=='w' and str[i]=='w'){
            i++,j--;
            continue;
        }
        else if(str[j]=='x' and str[i]=='x'){
            i++,j--;
            continue;
        }
        else if(str[j]=='d' and str[i]=='b'){
            i++,j--;
            continue;
        }
        else if(str[j]=='q' and str[i]=='p'){
            i++,j--;
            continue;
        }
        else
            break;
    }
    if(i>=str.size() && j<0)
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
}