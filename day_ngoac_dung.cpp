#include <bits/stdc++.h>
using namespace std;
int kiemtra(string s)
{
    stack <char> q;
    char c;
    int k = s.length();
    for (int i = 0; i < k; i++)
    {
        c = s[i];
        if (c == '[' || c == '{' || c == '(')
            q.push(c);
        else
        {
            if (!q.empty() && c == ']' && q.top() == '[')
                q.pop();
            else if (!q.empty() && c == '}' && q.top() == '{')
                q.pop();
            else if (!q.empty() && c == ')' && q.top() == '(')
                q.pop();
           else return 0;
        }
    }
    if (q.size()>0) return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (kiemtra(s))
            cout << "YES" << endl;
            else cout << "NO" << endl;
    }
}