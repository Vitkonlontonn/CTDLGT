#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        queue<string> q;
        q.push("1");
        int n;
        cin >> n;
        for (int i=1; i<=n; i++)
        {
            string t=q.front();
            q.push(t+"0");
            q.push(t+"1");
            q.pop();
            cout <<t<<" ";
        }
        cout << endl;
    }
}