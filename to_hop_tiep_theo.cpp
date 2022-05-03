#include<bits/stdc++.h>
using namespace std;
void sinh (int a[], int n, int k)
{
    int b[100];
    for (int i=1; i<=k; i++) b[i]=a[i];
    int i=k;
    while (a[i]==n-k+i)
    {
        i--;
    }
    if (i==0) cout <<k<<endl;
    else 
    {
        int c=0;
        a[i]++;
        for (int j=i+1; j<=k; j++)
        a[j]=a[j-1]+1;
        for (int q=1; q<=k; q++)
        {
            for (int r=1; r<=k; r++)
            if (a[q]==b[r]) c++;
        }
        cout <<k-c<<endl;
        
    }
    
    

    
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k+1];
        for (int i=1; i<=k; i++) cin >>a[i];
        sinh(a,n,k);
    }
}