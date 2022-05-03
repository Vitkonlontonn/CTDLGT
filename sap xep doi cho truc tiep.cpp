#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, d = 0;
	cin >> n;
	int a[n + 1];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
F
			if (a[i] > a[j])
				swap(a[i], a[j]);
		// d++;
		if (i != n - 1)
		{
			cout << "Buoc " << i + 1 << ": ";
			for (int k = 0; k < n; k++)
				cout << a[k] << " ";
			cout << endl;
		}
	}
}
