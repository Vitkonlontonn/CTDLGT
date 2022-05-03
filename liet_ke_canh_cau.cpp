#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> ke[1005];
int checked[1005];
void DFS(int u)
{
    checked[u] = 1;
    for (int i = 0; i < ke[u].size(); i++)
    {
        int v = ke[u][i];
        if (checked[v] == 0)
            DFS(v);
    }
}

void canhcau()
{
    int i, j, k, u;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < ke[i].size(); j++)
        {
            u = ke[i][j];
            ke[i].erase(ke[i].begin() + j);
            DFS(i);
            bool xet = false;
            for (k = 1; k <= n; k++)
            {
                if (checked[u] == 0)
                    xet = true;
            }
            if (xet && i < u)
                cout << i << " " << u << " ";
            ke[i].insert(ke[i].begin() + j, u);
            memset(checked, 0, sizeof(checked));
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        memset(checked, 0, sizeof(checked));
        cin >> n >> e;
        for ( int i = 0; i < 1005; i++)
            ke[i].clear();
        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        canhcau();
        cout << endl;
    }
}