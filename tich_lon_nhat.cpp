#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    
    
        int n;
        cin >> n;
        int a[n + 3];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int t1, t2, t3, t4, m1, m2;
        t1=a[0]*a[1]*a[n-1];
        t2=a[0]*a[1];
        t3=a[n-1]* a[n-2];
        t4= a[n-1]* a[n-2]*a[n-3];

        m1=max(t1, t2);
        m2=max (t3, t4);
        int maxxx=max (m1, m2);
        cout << maxxx << endl;
    
}