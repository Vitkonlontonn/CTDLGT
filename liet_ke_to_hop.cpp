#include <bits/stdc++.h>
using namespace std;
int p, n, k, a[50];
int s[50], b[50];
bool ok = false;
void in()
{
    for (int i = 1; i <= k; i++)

        cout << b[a[i]] << " ";
    cout << endl;
}
void sinh()
{

    int i = k;
    while (a[i] == p - k + i)
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
int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    p=1;
    sort(s + 1, s + 1 + n);
    for (int i = 1; i <=n; i++)
    {
        
        if (s[i] != s[i + 1])
        {
            b[p++] = s[i];
        }
    }
    p--;
    for (int i = 1; i <= p; i++)
        a[i]=i;

    while (!ok)
    {
        in();
        sinh();
    }
 }
 //1 2 3 3 4 4 5 5
 //