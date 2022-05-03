#include <bits/stdc++.h>
using namespace std;
int tinh(int n, int a[])
{
    int c[n + 2];
    for (int i = 0; i < n; i++)
        c[i] = a[i];
    sort(c, c + n);
    if (n%2!=0 &&c[n / 2] != a[n / 2])
        return 0;
    int d = 0 ;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] == c[i] && a[n - 1 - i] == c[n - 1 - i])
            d++;
        if (a[i] == c[n - 1 - i] && a[n - 1 - i] == c[i])
            d++;
    }
    if (d != n / 2)
        return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (tinh (n, a)==1) cout << "Yes"<<endl;
        else cout << "No"<<endl;
    }
}