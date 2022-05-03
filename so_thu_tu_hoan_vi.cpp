#include<bits/stdc++.h>
using namespace std;
int n, a[10];
bool ok=false;
void sinh ()
{
    int i=n-1;
    while (a[i]>a[i+1]) i--;
    if (i==0) ok=true;
    else 
    {
        int j=n; while (a[j]<a[i]) j--;
        swap (a[i], a[j]);
        int d=i+1, c=n;
        while (d<c)
        {
            swap (a[d], a[c]);
            d++; c--;
        }
    }
    
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int d=0;
        cin >> n;
        for (int i=1; i<=n; i++) cin >> a[i];
        while (!ok)
        {
            
            
            d++;
            sinh ();

        }
        int tich=1;
        for (int i=1; i<=n; i++) tich*=i;
        cout <<tich-d+1<<endl;
        ok=false;
    }
}