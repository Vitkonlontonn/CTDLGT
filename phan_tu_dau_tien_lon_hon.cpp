#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> q;
        int r[n];
        for (int i = n - 1; i >= 0; i--)
        {
            while (!q.empty() && a[i] >= q.top())
                q.pop();
            if (q.empty())
                r[i] = -1;
            else
                r[i] = q.top();
            q.push(a[i]);
        }
        for (int i = 0; i < n; i++)
            cout << r[i] << " ";
        cout << endl;
    }
}