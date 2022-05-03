#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[20];
bool ok=false;
void in ()
{
    for (int i=1; i<=k; i++) cout <<(char)(a[i]+64);
    cout <<endl;
}
void sinh ()
{
    int i=k;
    while (a[i]==n-k+i)
    {
        i--; 
    }
    if (i==0) ok= true;
    else {
        a[i]++;
        for (int j=i+1; j<=k; j++)
        a[j]=a[j-1]+1;

    }
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        cin >>n>>k;
        
         
          for (int i=1; i<=n; i++) a[i]=i;
        while (!ok)
        {
            
            in ();
            sinh ();
        }  
        
        ok=false;
    }
}