#include <bits/stdc++.h>
using namespace std;
int n, k, a[30], b[30];
string s[30], r[30];
bool ok = false;
void in()
{
    for (int i = 1; i <= k; i++)
        cout << r[a[i]] << " ";
    cout << endl;
}
void quaylui(int i)
{
    int j = i;
    for (j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            quaylui(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        a[i] = i;

    cin.ignore();
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    sort(s + 1, s + 1 + n);
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i + 1])
            r[j++] = s[i];
    }
    r[j++]=s[n];
    n = j-1;
    quaylui(1);
}