#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        vector<int> res[1005];
        int checked[1005];
        cin >> v >> e >> u;
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            res[a].push_back(b);
            //res[b].push_back(a);
        }
        for (int i = 1; i <= v; i++)
            checked[i] = 0;
        stack<int> q;
        q.push(u);
        checked[u] = 1;
        cout << u << " ";
        while (!q.empty())
        {
            int s = q.top();
            q.pop();
            for (int t = 0; t < res[s].size(); t++)
            {
                if (checked[res[s][t]] == 0)
                {
                    cout << res[s][t] << " ";
                    checked[res[s][t]] = 1;
                    q.push(s);
                    q.push(res[s][t]);
                    break;
                }
            }
        }
        cout << endl;
    }
}