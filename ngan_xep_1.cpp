#include <bits/stdc++.h>
using namespace std;
stack<int> q;
int n;
string s;
void show()
{

    vector<int> a;
    if (q.empty())
        cout << "empty" ;
    while (!q.empty())
    {
        a.push_back(q.top());
        q.pop();
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        {
            cout << a[i] << " ";
            q.push(a[i]);
        }
    }
    cout <<endl;
}
int main()
{

    while (cin >> s)
    {

        if (s == "push")
        {
            cin >> n;
            q.push(n);
        }
        else if (s == "pop")
            q.pop();
        else if (s == "show") // show
        {
            show();
        }
        else
        {
            break;
        }
    }
}
