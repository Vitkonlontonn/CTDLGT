#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));

    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        s = s + ' ';
        int j=0;
        for (int k=0; k<s.length(); k++)
        {
            if (s[k] == ' ')
            {
                a[i][j]=a[j][i]=1; // nếu gặp dấu cách thì cho =1
                j=0;
            }
            else 
            {
                j=j*10 +s[k]-'0'; // nếu chưa gặp dấu cách thì cứ làm như vậy
            }
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}