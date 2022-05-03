#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long sum = 0;
        int n;
        cin >> n;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            sum += a[i] * b[n-1-i];
        }
        cout << sum << endl;
    }
}