#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        long long d = 0;
        queue<long long> q;
        long long n;
        cin >> n;
        
        q.push(1);
        while (q.front()<=n)
        {
            long long temp = q.front();
            q.pop();
            q.push(temp*10);
            q.push(temp*10+1);
            d++;
           // cout << temp << " ";
        }

        cout << d << endl;
    }
}