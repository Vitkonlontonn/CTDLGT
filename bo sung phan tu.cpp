#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int b[100000] = {0};
		for (int i = 0; i < n; i++)
		{
			b[a[i]] = 1;
		}
		int dem = 0;
		sort(a, a + n);
		for (int i = a[0]; i < a[n - 1]; i++)
		{
			if (b[i] == 0)
				dem++;
		}
		cout << dem << endl;
	}
}
