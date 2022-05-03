#include <bits/stdc++.h>

using namespace std;
 vector < int >  res [1005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u, v, a, b;
        cin >> a >> b;
        for (int i = 0; i <1005; i++) res[i].clear();
        for (int i = 1; i <= b; i++)
        {
            cin >> u >> v;
            res[u].push_back(v);
            res[v].push_back(u);
        }
       
        // for (int i = 1; i <= b; i++)
        // {
        //     sort (res[i].begin(), res[i].end());
        // }
        for (int i = 1; i <= a; i++)
        {
            cout << i << ": ";
           
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
        
    }
}