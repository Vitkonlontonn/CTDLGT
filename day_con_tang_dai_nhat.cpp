#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l[n + 2];
    l[0] = 1;
    l[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int max = 0;
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i] && l[j] >= max)
                max = l[j];
        }
        l[i] = max + 1;
    }
    sort(l + 1, l + 1 + n);
    cout << l[n];
}