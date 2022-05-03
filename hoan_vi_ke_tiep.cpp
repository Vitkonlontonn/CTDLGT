#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int A[n+1];
        for (int i=1; i<=n; i++) cin >> A[i];
        int i=n-1;
        while (A[i]>A[i+1])
        {
            i--;
        }
        if (i==0)
        {
            for (int k=1; k<=n; k++) cout <<k<<" ";

        }
        else 
        {
            int j=n;
            while (A[j]<A[i])
            {
                j--;
            }
            swap (A[i], A[j]);
            int d=i+1, c=n;
            while (d<c)
            {
                swap (A[d], A[c]);
            }
            for (int k=1; k<=n; k++) cout <<A[k]<<" ";
        }
        cout <<endl;

    }
}