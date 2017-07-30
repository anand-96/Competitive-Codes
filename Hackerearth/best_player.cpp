#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
	int n,t;
	map<string,int> fans;
	vector<int> v;
	string name;
	int fan;
	cin>>n>>t;
	while(n--){
		cin>>name>>fan;
		fans[name]=fan;
		v.push_back(fan);
	}
	sort(v.begin(),v.end());
	map<string,int> :: iterator it;
  for (int i = v.size()-1; i >=v.size()-t ; i--) {
  	for(it=fans.begin();it!=fans.end();it++){
  		if(it->second==v[i]){
  			cout<<it->first<<endl;
  			fans.erase(it->first);
  			break;
  		}
  	}
  }
  return 0;
