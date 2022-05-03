#include <bits/stdc++.h>
using namespace std;
stack<int> q;
int n;
string s;
void print()
{

    if (q.empty())
        cout << "NONE" << endl;
    else
        cout << q.top() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            q.push(n);
        }
        else if (s == "POP" )
        {if (q.empty() == 0)
                q.pop();

        }
            
            else if (s == "PRINT")
                print();
            else
                break;
    }
}