#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    deque<int> dq;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int k;
            cin >> k;
            dq.push_back(k);
        }
        else if (s == "PUSHFRONT")
        {
            int k;
            cin >> k;
            dq.push_front(k);
        }
        else if (s == "PRINTFRONT")
        {
            if (!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "PRINTBACK")
        {
            if (!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPFRONT")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "POPBACK")
        {
            if (!dq.empty())
                dq.pop_back();
        }
    }
}