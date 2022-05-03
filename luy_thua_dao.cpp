#include <bits/stdc++.h>
using namespace std;
long long du = 1e9 + 7;

long long process(long long n)
{
    long long r = 0;
    while (n)
    {
        r += n % 10;
        n /= 10;
        r *= 10;
    }
    r /= 10;
    return r;
}
long long luythua(long long n, long long r)
{
    if (r == 0)
        return 1;
    if (r == 1)
        return n % du;
    long long x = luythua(n, r / 2);
    if (r % 2 == 0)
        return (x * x) % du;
    return (x * x % du * n % du) % du;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long r;
        
        r = process(n);
        cout << luythua(n, r) << endl;
    }
}