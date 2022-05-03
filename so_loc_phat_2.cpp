#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<string> q;
        queue<string> s;
        int n;
        cin >> n;

        q.push("6");
        q.push("8");
        int d = 0;
        while ((q.front()).length() < n + 1)
        {
            string temp = q.front();

            q.push(temp + "6");
            q.push(temp + "8");
            q.pop();
            d++;
            s.push(temp);
        }
        cout << d << endl;
        while (!s.empty())
        {
            cout << s.front() << " ";
            s.pop();
        }

        cout << endl;
    }
}
