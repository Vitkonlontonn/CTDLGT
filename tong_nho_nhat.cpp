#include <bits/stdc++.h>
using namespace std;
main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, a[100];
        cin >> n;
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long tong = 0;
        long long d = 1;
        for (long long i = n - 1; i >= 0; i -= 2)
        {
            if (i - 1 >= 0)
                tong += (a[i] + a[i - 1]) * d;
            else
                tong += a[i] * d;
            d *= 10;
        }
        cout << tong << endl;
    }
}