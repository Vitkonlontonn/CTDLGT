#include<bits/stdc++.h>
using namespace std;
int a[1000005], f[1000005];
int main ()
{
    int t, n, i;cin >>t;
    while (t--)
    {
        cin >>n;
        memset(f, 0, sizeof(f));
        for (int i=1; i<=n; i++)
        cin >>a[i];

            f[1]=a[1];
            f[2]=max (a[1],a[2]);
            for (i=3; i<=n; i++)
            {
                f[i]=max (a[i]+f[i-2],f[i-1]);

            }
            cout <<f[n]<<endl;
        

    }
}