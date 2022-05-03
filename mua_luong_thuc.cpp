#include <bits/stdc++.h>
using namespace std;
int solve(int n, int s, int m)
{
    int day = 0;
    if (n < m)
        return 0;
    int lt = s * m;
    for (int i = 1; i <= s; i++)
    {
        if (i % 7 == 0)
            continue;
        else
        {
            day ++;
            if (day * n >= lt)
                return day;
        }
    }
    return 0;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        if (solve(n, s, m))
            cout << solve(n, s, m) << endl;
        else
            cout << -1 << endl;
    }
}