#include<bits/stdc++.h>
using namespace std;
struct task {
    int strart, finish;
} a[1005];
bool cmp (task a, task b) {
    return a.finish < b.finish;
}
int main ()
{
    int t, n, d, i, j, k;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i].strart;
        for (int i=0; i<n; i++) cin >> a[i].finish;
        sort (a, a+n, cmp);
        i=0; d=1;
        for (int j=1; j<n; j++) 
        {
            if (a[j].strart>=a[i].finish)
            {
                i=j; d++;
            }
        }
        cout << d  <<endl;

    }
}
// 0 1
// 19 21
// 19 25
// 32 40
// 51 52
// 39 55
// 46 65
// 37 74
// 65 76
// 5 94