#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        int i=n-1;
        while (s[i]=='0' && i>=0)
        {
            
            s[i]='1';
            i--;
        }
        if (i<=0) {
            for (int k=0; k<n; k++) cout <<1;
            cout <<endl;
        }
        else
        {
            s[i]='0';
        cout <<s<<endl;

        }
        

    }
}
