#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
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
        int sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            sum =( sum + (a[i] * i) % m) %m;
        }
        cout << sum << endl;
    }
}