#include <bits/stdc++.h>
using namespace std;
int n, k, a[15], b[15];
bool ok = false;
void sinh()
{
    int i = k;
    while (a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
        ok = true;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int check()
{
    for (int i = 0; i <= k; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >>k;
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
            a[i] = i;
        }

        int d = 1;

        while (!ok && check() == 0)
        {
            d++;
            sinh();
        }
        cout << d << endl;
        ok = false;
    }
}