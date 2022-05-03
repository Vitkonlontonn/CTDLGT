#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int k=1;
		for (int i=s.length()-1; i>=0; i--)
		{
			if (s[i]=='0')
			{
				for (int j=i; j<s.length(); j++)
				{
					if (s[j]=='0') s[j]='1';
					else s[j]='0';
					
				}k=0;
				break;
				
			}
		}
		
		if (k==0)cout <<s;
		else for (int i=0; i<s.length(); i++) cout <<"0";
		cout <<endl;
		
	}
}
