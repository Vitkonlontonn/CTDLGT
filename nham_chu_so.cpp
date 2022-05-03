#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int d=1, summax=0, summin=0;
    for (int i = 0; i < a.length(); i++)
        if (a[i] == '5')
            a[i] = '6';

    for (int i = 0; i < b.length(); i++)
        if (b[i] == '5')
            b[i] = '6';
    for (int i=a.length()-1; i>=0; i--)
    {
        summax +=(a[i]-'0')*d;
        d*=10;
    }
    d=1;
    for (int i=b.length()-1; i>=0; i--)
    {
        summax +=(b[i]-'0')*d;
        d*=10;
    }
    //----------------------------------------------------------------
    for (int i = 0; i < a.length(); i++)
        if (a[i] == '6')
            a[i] = '5';

    for (int i = 0; i < b.length(); i++)
        if (b[i] == '6')
            b[i] = '5';
    d=1;
    for (int i=a.length()-1; i>=0; i--)
    {
        summin +=(a[i]-'0')*d;
        d*=10;
    }
    d=1;
    for (int i=b.length()-1; i>=0; i--)
    {
        summin +=(b[i]-'0')*d;
        d*=10;
    }
    cout <<summin << " "<<summax << endl;
   
}
int main()
{
    solve ();
}