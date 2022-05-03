#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
int tinh(int n, int k)
{
    int i, j, f[n+5] = {0};
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= n+2; i++)
    {
        for (int j = 2; j <= min(i, k); j++)
            f[i] = (f[i] + f[i - j]) % m;
    }
    return f[n];
}
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        
        cin >> n >> k;
        cout << tinh (n, k)<<endl;
    }
}