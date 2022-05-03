#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int dem = 0;
        cin >> s;
        stack<int> q;
        q.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                q.push(i);
            }
            else
            {
                q.pop();
                if (!q.empty())
                    dem = max(dem, i - q.top());

                else if (q.empty())
                    q.push(i);
            }
        }
        cout << dem << endl;
    }
    return 0;
}