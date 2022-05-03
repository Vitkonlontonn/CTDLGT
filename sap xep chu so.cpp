#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string a[n+1];
		for (int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		int b[11]={0};
		for (int i=0; i<n; i++)
		{
			string s=a[i];
			for (int j=0; j<s.length(); j++)
			{
				b[s[j]-'0']=1;
				
			}
		}
		for (int i=0; i<=9; i++)
		{
			if (b[i]==1) cout <<i<<" ";
		}
		cout <<endl;
		
		
	}
}

