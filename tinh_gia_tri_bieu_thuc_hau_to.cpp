#include <bits/stdc++.h>
using namespace std;
int check(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
     cin.ignore();
    while (t--)
       
    {
        string s;
        cin >> s;
        stack<int> q;
        for (int i = 0; i < s.length(); i++)
        {
            if (check(s[i]) == 0)
            {
                q.push(s[i] - '0');
            }
            else
            {
                int t1 = q.top();
                q.pop();
                int t2 = q.top();
                q.pop();
                
                int temp;
                if      (s[i] == '+') temp = t2 + t1;
                else if (s[i] == '-') temp = t2 - t1;
                else if (s[i] == '*') temp = t2 * t1;
                else if (s[i] == '/') temp = t2 / t1;
                q.push(temp);
               
            }
        }
        cout << q.top() << endl;
    }
}