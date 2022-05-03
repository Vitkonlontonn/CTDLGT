#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, v, u;
        vector<int> ke[1005];
        int check[1005] = {0};
        queue<int> q;
        cin >> e >> v >> u;
        for (int i = 1; i <= v; i++)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        q.push(u);
        check[u] = 1;
        cout << u << " ";
        while (!q.empty())
        {
            int s = q.front();
            q.pop();
            for (int t = 0; t < ke[s].size(); t++)
            {
                if (check[ke[s][t]] == 0)
                {
                    q.push(ke[s][t]);
                    cout << ke[s][t] << " ";
                    check[ke[s][t]] = 1;
                }
            }
        }
        cout << endl;
    }
}