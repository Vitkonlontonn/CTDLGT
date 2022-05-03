#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long a[n+1];
        for (int i=0; i<n; i++) cin >>a[i];
        int d=0;
        for (int i=0; i<n; i++)
        {
            if (a[i]>a[i+1])
            {
                d=i;
                break;
            }
        }
        cout <<d+1 <<endl;
    }
}