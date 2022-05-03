// Idea:
//  Nếu là là toán hạng thì push
//  Nếu là toán tử thì gộp 2 toán tử đầu tiên lại cùng với toán hạng => string mới
//  => push cả string này vào stack
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
        stack<string> q;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (check(s[i]) == 0)
            {
                q.push(string(1, s[i])); // chuyển 1 ký tự thành 1 xâu
            }
            else
            {
                string s1 = q.top();
                q.pop();
                string s2 = q.top();
                q.pop();
                string temp = "(" + s1 + s[i] + s2 + ")";
                q.push(temp);
            }
        }
        cout <<q.top() << endl;
    }
}