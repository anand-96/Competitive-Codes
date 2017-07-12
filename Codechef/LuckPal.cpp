#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main()
{
		string s;
		cin >> s;
		
			int mi = 100000;
			string ans = "";
				string p = s;
				int c = 0;
				
				for (int j = 0, k = s.size()-1; j <= k; j++,k--)
				{
					if (p[j] != p[k])
					{
							char ch = min(p[j],p[k]);
							p[j] = ch;
							p[k] = ch;
							c++;
					} 
				}

			cout<<c<<endl;
			cout<<p<<endl;
}