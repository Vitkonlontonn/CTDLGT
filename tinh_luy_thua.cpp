#include <bits/stdc++.h>
using namespace std;
long long m = 10e9 + 7;
long long power(long long a, long long n)
{
    if (n == 0)
        return 1;
    long long x = power(a, n / 2);
    if (n % 2 == 0)
        return (x * x) % m;
    return (x * x) % m * a % m;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << power(n, k) << endl;
    }
}