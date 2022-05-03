#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while(t--)
	{
	long long n, m; cin >>m >>n;
	long long a[n+1], b[m+1];
	for (long long i=0; i<n; i++) cin >>a[i];
	for (long long i=0; i<m; i++) cin >>b[i];
	sort (a, a+n); sort (b,b+n);
	cout << a[n-1]*b[0]<<endl;	
	}
	
	
	
}
