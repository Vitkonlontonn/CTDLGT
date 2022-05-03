#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k, d=0; cin >> n>>k;
		int a[n+1];
		for (int i=0; i<n; i++)
		cin >> a[i];
		for (int i=0; i<n; i++)
		{
			//if (a[i]<k)
			{
				for (int j=i+1; j<n; j++)
				if (k==a[i]+a[j]) d++;
			}
		}
		cout <<d <<endl;
	}
}
