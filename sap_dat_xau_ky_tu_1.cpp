#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int a['z' + 1] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i]]++;
        }
        int M = *max(a + 'a', a + 'z');
        if (M > s.size() - M + 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
}
