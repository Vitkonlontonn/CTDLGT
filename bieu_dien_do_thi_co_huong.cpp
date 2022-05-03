#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int e, v;
        cin >> v >> e;
        vector<int> res[1005];

        for (int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            res[a].push_back(b);
        }
        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;    
        }

        
       
    }
}