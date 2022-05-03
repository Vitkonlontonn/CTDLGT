#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >>n;
        queue <long long> q;
        q.push(9);
        while (1)
        {
            long long temp=q.front();
            q.push(temp*10);
            q.push(temp*10 +9);
            q.pop();
            if (temp%n==0)
            {
                cout <<temp <<endl;
                break;
            }
        }

        

    }
}