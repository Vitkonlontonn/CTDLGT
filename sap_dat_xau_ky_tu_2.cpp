#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        int a['z' + 1] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i]]++;
        }

        int m = *max_element(a + 'A', a + 'Z');
        if ((m - 1) * d + 1 <= s.size())
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}