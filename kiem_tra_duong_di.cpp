#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> ke[1005];
       int checked[1005];
int n, m, q, x, y;
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[v].push_back(u);
            ke[u].push_back(v);
        }
        cin >> q;
        for (int i = 1; i <= q; i++)
        {

            cin >> x >> y;
            bool xet=false;
            stack<int> q;
            q.push(x);
            memset (checked, 0, sizeof(checked));
            checked[x] = 1;
            
            while (!q.empty())
            {
                int s = q.top();
                q.pop();
                for (int t = 0; t < ke[s].size(); t++)
                {
                    if (checked[ke[s][t]] == 0)
                    {
                        if (ke[s][t]==y)
                        {
                            xet=true;
                        }
                        checked[ke[s][t]] = 1;
                        q.push(s);
                        q.push(ke[s][t]);
                        break;
                    }
                }
            }
            if (xet) cout <<"YES"<<endl;
            else cout <<"NO"<<endl;
        }
    }
}