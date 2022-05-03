#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<string> q;
        stack <string> s;
        int n;
        cin >> n;
        q.push("6");
        q.push("8");
        while ((q.front()).length() < n + 1)
        {
            string temp = q.front();
           
            q.push(temp + "6");
            q.push(temp + "8");
            q.pop();
            s.push(temp);
            
        }
        while (!s.empty())
        {
            cout <<s.top()<<" ";
            s.pop();
        }
        cout << endl;
    }
}